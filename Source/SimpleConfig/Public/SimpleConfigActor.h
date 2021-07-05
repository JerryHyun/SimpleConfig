// Copyright SeungHyeon Hyun. All Rights Reserved.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SimpleConfigActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConfigChangedDelegate);

UCLASS(Config = SimpleConfig)
class SIMPLECONFIG_API ASimpleConfigActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SimpleConfig")
	bool bSaveConfigAtEndplay;

	UPROPERTY(BlueprintAssignable, Category = "SimpleConfig")
	FOnConfigChangedDelegate OnSaveConfig;

	UPROPERTY(BlueprintAssignable, Category = "SimpleConfig")
	FOnConfigChangedDelegate OnLoadConfig;
	
public:	
	ASimpleConfigActor();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION(BlueprintCallable, Category = "SimpleConfig")
	void SaveSimpleConfig();

	UFUNCTION(BlueprintCallable, Category = "SimpleConfig")
	void LoadSimpleConfig();
};
