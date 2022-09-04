// Copyright 2022 WyvernLang. All Rights Reserved.

#pragma once
#include "Engine/DataTable.h"
#include "Kismet/BlueprintFunctionLibrary.h"
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
class UNICODEHANDLER_API UUnicodeHandlerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	// If it cannot be converted, "NULL" will be returned and an error will be logged.
	UFUNCTION(BlueprintCallable, Category = "Unicode Convert", meta = ( DisplayName = "Unicode To Character"), BlueprintPure)
	static FString UnicodeToCharacter(const FString& unicode, const UDataTable* DataTable);

	/* If it cannot be converted, "NULL" will be returned and an error will be logged. */
	UFUNCTION(BlueprintCallable, Category = "Unicode Convert", meta = (DisplayName = "Character To Unicode"), BlueprintPure)
	static FString CharacterToUnicode(const FString& unicode, const UDataTable* DataTable);

protected:
	/* for single character */
	UFUNCTION(Category = "Unicode Convert")
	static FString UnicodeToCharacter_Single(const FString& unicodeLower, const UDataTable* DataTable);

	UFUNCTION( Category = "Unicode Convert")
	static FString CharacterToUnicode_Single(const FString& character, const UDataTable* DataTable);
};
