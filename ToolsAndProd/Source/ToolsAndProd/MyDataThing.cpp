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

	// 2. Add your fields (These keys MUST match your Supabase column names exactly)
	RootObject->SetStringField(TEXT("name"), FileNameMaker("csv"));
	RootObject->SetStringField(TEXT("time_played"), TimePlayedFormatter(secondsPlayed));
	
	
	FUserHardwareData Hardware = GetUserHardware();
	RootObject->SetStringField(TEXT("cpu_brand"), Hardware.CPUBrand);
	RootObject->SetStringField(TEXT("cpu_cores"), Hardware.CPUCoreCount);
	RootObject->SetStringField(TEXT("GPU brand"), Hardware.GPUBrand);
	RootObject->SetStringField(TEXT("Rendering platform"), Hardware.renderingPlatform);
	RootObject->SetStringField(TEXT("RAM GB"), Hardware.totalPhysicalRAM_GB);
	RootObject->SetStringField(TEXT("OS Version"), Hardware.OSVersion);
	
	
	RootObject->SetStringField(TEXT("q1_answer"), combined_QA.no1.Answer.ToString());
	RootObject->SetStringField(TEXT("q2_answer"), combined_QA.no2.Answer.ToString());
	RootObject->SetStringField(TEXT("q3_answer"), combined_QA.no3.Answer.ToString());
	RootObject->SetStringField(TEXT("q4_answer"), combined_QA.no4.Answer.ToString());
	RootObject->SetStringField(TEXT("q5_answer"), combined_QA.no5.Answer.ToString());
	RootObject->SetStringField(TEXT("q6_answer"), combined_QA.no6.Answer.ToString());
	RootObject->SetStringField(TEXT("q7_answer"), combined_QA.no7.Answer.ToString());
	RootObject->SetStringField(TEXT("q8_answer"), combined_QA.no8.Answer.ToString());
	RootObject->SetStringField(TEXT("q9_answer"), combined_QA.no9.Answer.ToString());
	RootObject->SetStringField(TEXT("q10_answer"), combined_QA.no10.Answer.ToString());
	RootObject->SetStringField(TEXT("q11_answer"), combined_QA.no11.Answer.ToString());
	
	
	FString RequestContent;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestContent);
	FJsonSerializer::Serialize(RootObject.ToSharedRef(), Writer);

	// 5. Send the request
	FString ProjectID = TEXT("ilsrbqwxkdtaebnvmllj");
	FString TableName = TEXT("PlayerInfo");
	FString URL = FString::Printf(TEXT("https://%s.supabase.co/rest/v1/%s"), *ProjectID, *TableName);
    
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("apikey"), TEXT("sb_publishable_WVN2I77W9HEjaWJDal4lOg_flpujFFP")); // Use your actual key
	Request->SetHeader(TEXT("Authorization"), TEXT("sb_publishable_WVN2I77W9HEjaWJDal4lOg_flpujFFP"));
    
	Request->SetContentAsString(RequestContent);
	Request->ProcessRequest();
}






void UMyDataThing::CSV_Maker(float secondsPlayed, FCombined_QA combined_QA)
{
	FString CSV_String;
	
	FString fileType = "csv";
	FString fileName = FileNameMaker(fileType);
	FString timePlayed = TimePlayedFormatter(secondsPlayed);
	
	FString MiscRows[3];
	FString HardwareDataRows[8];
	FString SurveyRows[13];
	
	MiscRows[0] = FString::Printf(TEXT("Name,%s\n"), *fileName);
	MiscRows[1] = FString::Printf(TEXT("Time played,%s\n"), *timePlayed);
	MiscRows[2] = TEXT("\n");
	
	HardwareDataRows[0] = TEXT("User hardware data\n");
	HardwareDataRows[1] = FString::Printf(TEXT("CPU brand,%s\n"), *GetUserHardware().CPUBrand);
	HardwareDataRows[2] = FString::Printf(TEXT("CPU core count,%s\n"), *GetUserHardware().CPUCoreCount);
	HardwareDataRows[3] = FString::Printf(TEXT("GPU brand,%s\n"), *GetUserHardware().GPUBrand);
	HardwareDataRows[4] = FString::Printf(TEXT("Rendering platform,%s\n"), *GetUserHardware().renderingPlatform);
	HardwareDataRows[5] = FString::Printf(TEXT("RAM GB,%s\n"), *GetUserHardware().totalPhysicalRAM_GB);
	HardwareDataRows[6] = FString::Printf(TEXT("OS Version,%s\n"), *GetUserHardware().OSVersion);
	HardwareDataRows[7] = TEXT("\n");
	
	SurveyRows[0] = TEXT("Survey form results\n");
	SurveyRows[1] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no1.Question.ToString(), *combined_QA.no1.Answer.ToString());
	SurveyRows[2] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no2.Question.ToString(), *combined_QA.no2.Answer.ToString());
	SurveyRows[3] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no3.Question.ToString(), *combined_QA.no3.Answer.ToString());
	SurveyRows[4] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no4.Question.ToString(), *combined_QA.no4.Answer.ToString());
	SurveyRows[5] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no5.Question.ToString(), *combined_QA.no5.Answer.ToString());
	SurveyRows[6] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no6.Question.ToString(), *combined_QA.no6.Answer.ToString());
	SurveyRows[7] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no7.Question.ToString(), *combined_QA.no7.Answer.ToString());
	SurveyRows[8] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no8.Question.ToString(), *combined_QA.no8.Answer.ToString());
	SurveyRows[9] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no9.Question.ToString(), *combined_QA.no9.Answer.ToString());
	SurveyRows[10] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no10.Question.ToString(), *combined_QA.no10.Answer.ToString());
	SurveyRows[11] = FString::Printf(TEXT("%s,%s\n"), *combined_QA.no11.Question.ToString(), *combined_QA.no11.Answer.ToString());
	SurveyRows[12] = TEXT("\n");
	
	
	for(FString row : MiscRows)
	{
		CSV_String += row;
	}
	for(FString row : HardwareDataRows)
	{
		CSV_String += row;
	}
	for(FString row : SurveyRows)
	{
		CSV_String += row;
	}
	
	//CSV_Saver(CSV_String);
	CSV_Sender(CSV_String);
}

void UMyDataThing::CSV_Sender(FString CSV_String)
{
	FString ProjectID = TEXT("ilsrbqwxkdtaebnvmllj");
	FString TableName = TEXT("PlayerInfo");
	FString APIKey = TEXT("sb_publishable_WVN2I77W9HEjaWJDal4lOg_flpujFFP");

	FString URL = FString::Printf(TEXT("https://%s.supabase.co/rest/v1/%s"), *ProjectID, *TableName);

	//Send string
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("POST");

	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("apikey"), APIKey);
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *APIKey));
	
	Request->SetContentAsString(CSV_String);

	Request->OnProcessRequestComplete().BindUObject(this, &UMyDataThing::OnResponseReceived);
	Request->ProcessRequest();
}


void UMyDataThing::CSV_Saver(FString CSV_String)
{
	FString fileType = "csv";
	FString fileName = FileNameMaker(fileType);
	
	FString savePath = FPaths::ProjectContentDir() + fileName;
	FFileHelper::SaveStringToFile(CSV_String, *savePath);
	
	FString fileLocationMsg = "File saved to: " + savePath;
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Orange, fileLocationMsg);
}

void UMyDataThing::JsonMakerAndSender(float secondsPlayed, FCombined_QA combined_QA)
{
	FCombinedUserData combinedUserData;
	
	FString fileType = "json";
	FString fileName = FileNameMaker(fileType);

	
	combinedUserData.fileName = fileName;
	combinedUserData.timePlayed = TimePlayedFormatter(secondsPlayed);
	combinedUserData.userHardwareData = GetUserHardware();
	combinedUserData.combined_QA = combined_QA;
	
	FString savePath = FPaths::ProjectContentDir() + fileName;
	if (FJsonObjectConverter::UStructToJsonObjectString(combinedUserData, JsonString))
	{
		FFileHelper::SaveStringToFile(JsonString, *savePath);
	}
	
	FString fileLocationMsg = "File saved to: " + savePath;
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Orange, fileLocationMsg);

	void SendJson();
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

void UMyDataThing::SendJson()
{
	FString ProjectID = TEXT("ilsrbqwxkdtaebnvmllj");
	FString TableName = TEXT("");
	FString APIKey = TEXT("sb_publishable_WVN2I77W9HEjaWJDal4lOg_flpujFFP");

	FString URL = FString::Printf(TEXT("https://%s.supabase.co/rest/v1/%s"), *ProjectID, *TableName);

	//Send the JSON file to the server here.
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(URL);
	Request->SetVerb("POST");

	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("apikey"), APIKey);
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *APIKey));
	
	Request->SetContentAsString(JsonString);

	Request->OnProcessRequestComplete().BindUObject(this, &UMyDataThing::OnResponseReceived);
	Request->ProcessRequest();
	
}

void UMyDataThing::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (bWasSuccessful && Response.IsValid())
	{
		UE_LOG(LogTemp, Log, TEXT("Response: %s"), *Response->GetContentAsString());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("HTTP Request failed."))
	}
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