#pragma once
#include "CoreMinimal.h"
#include "FCombinedUserData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Interfaces/IHttpRequest.h"
#include "HttpModule.h"
#include "MyDataThing.generated.h"

UCLASS()
class TOOLSANDPROD_API UMyDataThing : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "MyDataFileMakers") static void MakeAndSendToServer(float secondsPlayed, const FCombined_QA combined_QA);
protected:
	
private:
	static FUserHardwareData GetUserHardware();
	FString static FileNameMaker(FString fileType);
	FString static TimePlayedFormatter(float secondsPlayed);
};