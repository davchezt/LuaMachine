// Copyright 2018-2020 - Roberto De Ioris


#include "LuaBlueprintPackage.h"
#include "LuaState.h"

TSubclassOf<ULuaState> ULuaBlueprintPackage::GetLuaState() const
{
	ULuaState* LuaState = Cast<ULuaState>(GetOuter());
	if (LuaState)
	{
		return LuaState->GetClass();
	}
	return nullptr;
}

UWorld* ULuaBlueprintPackage::GetWorld() const
{
	ULuaState* LuaState = Cast<ULuaState>(GetOuter());
	if (LuaState)
	{
		return LuaState->GetWorld();
	}
	return nullptr;
}