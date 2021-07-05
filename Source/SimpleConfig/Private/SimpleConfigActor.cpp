// Copyright SeungHyeon Hyun. All Rights Reserved.
#include "SimpleConfigActor.h"

// Sets default values
ASimpleConfigActor::ASimpleConfigActor(): bSaveConfigAtEndplay(true)
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASimpleConfigActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (bSaveConfigAtEndplay)
	{
		SaveSimpleConfig();
	}
}

void ASimpleConfigActor::SaveSimpleConfig()
{
	Super::SaveConfig();

	if (OnSaveConfig.IsBound())
	{
		OnSaveConfig.Broadcast();
	}
}

void ASimpleConfigActor::LoadSimpleConfig()
{
	Super::LoadConfig();

	if (OnLoadConfig.IsBound())
	{
		OnLoadConfig.Broadcast();
	}
}
