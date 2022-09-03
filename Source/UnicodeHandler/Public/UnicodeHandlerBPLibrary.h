// Copyright 2022 WyvernLang. All Rights Reserved.

#pragma once
#include "Misc/Char.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "UnicodeHandlerBPLibrary.generated.h"

USTRUCT(BlueprintType)
struct FStru_CharacterTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, Category = "Unicode Convert")
	FString Unicode;
	UPROPERTY(EditAnywhere, Category = "Unicode Convert")
	FString Character;
};

UCLASS()
class UUnicodeHandlerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	// If it cannot be converted, "NULL" will be returned and an error will be logged.
	// It first converts unicode letters into LOWERCASE letters (I don't want developers to pay attention to unicode letters case), then splits them into arrays according to "/", and finally combines the converted results for output.
	UFUNCTION(BlueprintCallable, Category = "Unicode Convert", meta = ( DisplayName = "Unicode To Character"), BlueprintPure)
	static FString UnicodeToCharacter(const FString& unicode, const UDataTable* DataTable);

	UFUNCTION(BlueprintCallable, Category = "Unicode Convert", meta = (DisplayName = "Character To Unicode"), BlueprintPure)
	static FString CharacterToUnicode(const FString& unicode, const UDataTable* DataTable);

	/* for single character */
	UFUNCTION(Category = "Unicode Convert")
	static FString UnicodeToCharacter_Single(const FString& unicodeLower, const UDataTable* DataTable);

	/* for single character */
	UFUNCTION( Category = "Unicode Convert")
	static FString CharacterToUnicode_Single(const FString& character, const UDataTable* DataTable);
};
