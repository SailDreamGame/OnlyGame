// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OnlyGameCaracterBase.generated.h"

UCLASS(Abstract)
class ONLYGAME_API AOnlyGameCaracterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// 设置此角色属性的默认值
	AOnlyGameCaracterBase();

protected:
	// 游戏开始时或生成时调用
	virtual void BeginPlay() override;


};
