// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "K2Node_CallFunction.h"
#include "MyWildFunctionCallNode.generated.h"

/**
 * 蓝图动态节点：函数调用的参数个数和参数类型都可以动态配置
 */
UCLASS()
class MYWILDNODEEDITOR_API UMyWildFunctionCallNode : public UK2Node_CallFunction
{
	GENERATED_BODY()

public:
	//~ Begin UEdGraphNode Interface.
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual void AllocateDefaultPins() override;
	//~ End UEdGraphNode Interface.


	//~ Begin UK2Node Interface.
	virtual FText GetMenuCategory() const override { return FText::FromString("MyWildDemo"); }
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	//~ End UK2Node Interface.

protected:
	UEdGraphPin* CachedFuncNamePin;

};
