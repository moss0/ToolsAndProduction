#include "MyDataThing.h"

//#include <cmath>
//#include <string>
#include "JsonObjectConverter.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "HAL/FileManager.h"
#include "GenericPlatform/GenericPlatformMisc.h"
#include "HAL/PlatformMemory.h"
#include "RHI.h"
//#include "Algo/ForEach.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"

FString JsonString;


void UMyDataThing::MakeAndSendToServer(float secondsPlayed, FCombined_QA combined_QA)
{
	TSharedPtr<FJsonObject> RootObject = MakeShareable(new FJsonObject());
	
	
	RootObject->SetStringField(TEXT("name"), FileNameMaker("csv"));
	RootObject->SetStringField(TEXT("time_played"), TimePlayedFormatter(secondsPlayed));
	
	
	FUserHardwareData Hardware = GetUserHardware();
	RootObject->SetStringField(TEXT("cpu_brand"), Hardware.CPUBrand);
	RootObject->SetStringField(TEXT("cpu_cores"), Hardware.CPUCoreCount);
	RootObject->SetStringField(TEXT("gpu_brand"), Hardware.GPUBrand);
	RootObject->SetStringField(TEXT("rendering_platform"), Hardware.renderingPlatform);
	RootObject->SetStringField(TEXT("ram_gb"), Hardware.totalPhysicalRAM_GB);
	RootObject->SetStringField(TEXT("os_version"), Hardware.OSVersion);
	
	
	RootObject->SetStringField(TEXT("do_you_enjoy_card_games"), combined_QA.no1.Answer.ToString());
	RootObject->SetStringField(TEXT("what_would_you_rate_greedy_piggies_overall"), combined_QA.no2.Answer.ToString());
	RootObject->SetStringField(TEXT("how_many_bugs_did_you_encounter"), combined_QA.no3.Answer.ToString());
	RootObject->SetStringField(TEXT("if_you_encountered_any_bugs_please_state_them_below"), combined_QA.no4.Answer.ToString());
	RootObject->SetStringField(TEXT("what_did_you_dislike_about_the_gameplay"), combined_QA.no5.Answer.ToString());
	RootObject->SetStringField(TEXT("what_did_you_enjoy_about_the_gameplay"), combined_QA.no6.Answer.ToString());
	RootObject->SetStringField(TEXT("what_do_you_think_would_make_the_gameplay_better"), combined_QA.no7.Answer.ToString());
	RootObject->SetStringField(TEXT("what_did_you_dislike_about_the_audio"), combined_QA.no8.Answer.ToString());
	RootObject->SetStringField(TEXT("what_did_you_enjoy_about_the_audio"), combined_QA.no9.Answer.ToString());
	RootObject->SetStringField(TEXT("what_do_you_think_would_make_the_audio_better"), combined_QA.no10.Answer.ToString());
	RootObject->SetStringField(TEXT("did_you_experience_any_connection_issues"), combined_QA.no11.Answer.ToString());
	
	
	FString RequestContent;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestContent);
	FJsonSerializer::Serialize(RootObject.ToSharedRef(), Writer);
	
	FString ProjectID = TEXT("ilsrbqwxkdtaebnvmllj");
	FString TableName = TEXT("PlayerInfo");
	FString URL = FString::Printf(TEXT("https://%s.supabase.co/rest/v1/%s"), *ProjectID, *TableName);
    
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	
	FString PublicAnonKey = TEXT("sb_publishable_WVN2I77W9HEjaWJDal4lOg_flpujFFP");
	Request->SetHeader(TEXT("apikey"), PublicAnonKey); 
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *PublicAnonKey));
    
	Request->SetContentAsString(RequestContent);
	
	Request->OnProcessRequestComplete().BindLambda([](FHttpRequestPtr RequestPtr, FHttpResponsePtr ResponsePtr, bool bWasSuccessful)
	{
		if (bWasSuccessful && ResponsePtr.IsValid())
		{
			int32 ResponseCode = ResponsePtr->GetResponseCode();
			FString ResponseBody = ResponsePtr->GetContentAsString();
			
			if (ResponseCode == 201 || ResponseCode == 200)
			{
				UE_LOG(LogTemp, Log, TEXT("Supabase Insert Successful!"));
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Supabase Error! Code: %d, Response: %s"), ResponseCode, *ResponseBody);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("HTTP Request failed entirely. Check network connection or URL layout."));
		}
	});
	
	Request->ProcessRequest();
}

FUserHardwareData UMyDataThing::GetUserHardware()
{
	FUserHardwareData userHardwareData;
	
	userHardwareData.CPUBrand = FPlatformMisc::GetCPUBrand();
	userHardwareData.CPUCoreCount = FString::FromInt(FPlatformMisc::NumberOfCores());
	
	if (GDynamicRHI)
	{
		userHardwareData.GPUBrand = GRHIAdapterName;
		userHardwareData.renderingPlatform = LegacyShaderPlatformToShaderFormat(GMaxRHIShaderPlatform).ToString();
	}
	
	FPlatformMemoryStats memoryStats = FPlatformMemory::GetStats();
	float RAM = static_cast<float>(memoryStats.TotalPhysical) / (1024.0f * 1024.0f * 1024.0f);
	userHardwareData.totalPhysicalRAM_GB = FString::Printf(TEXT("%.0f"), RAM);
	
	FString OSName;
	FString OSVersion;
	FPlatformMisc::GetOSVersions(OSName,OSVersion);
	userHardwareData.OSVersion = OSName + " " + OSVersion;
	
	return userHardwareData;
}

FString UMyDataThing::FileNameMaker(FString fileType)
{
	FDateTime now = FDateTime::UtcNow();

	FString fileName = FString::Printf(TEXT("%d-%02d-%02d_%02d-%02d-%02d_playerdata.%s"),
	now.GetYear(),
	now.GetMonth(),
	now.GetDay(),
	now.GetHour(),
	now.GetMinute(),
	now.GetSecond(),
	*fileType
	);
	
	return fileName;
}

FString UMyDataThing::TimePlayedFormatter(float secondsPlayed)
{
	int32 hours = FMath::TruncToInt(secondsPlayed / 3600.0f);
	float minutesRemaining = (secondsPlayed / 3600.0f - (float)hours) * 60.0f;
	int32 minutes = FMath::TruncToInt(minutesRemaining);
	float secondsRemaining = (minutesRemaining - (float)minutes) * 60.0f;
	int32 seconds = FMath::TruncToInt(secondsRemaining);
	
	return FString::Printf(TEXT("%dh %02dm %02ds"), hours, minutes, seconds);
}