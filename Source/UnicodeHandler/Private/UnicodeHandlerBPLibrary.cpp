// Copyright 2022 WyvernLang. All Rights Reserved.

#include "UnicodeHandlerBPLibrary.h"
#include "UnicodeHandler.h"

UUnicodeHandlerBPLibrary::UUnicodeHandlerBPLibrary(const FObjectInitializer& init) {}

FString UUnicodeHandlerBPLibrary::UnicodeToCharacter(const FString& unicode, const UDataTable* DataTable)
{
	/* check necessary conditions */
	if (DataTable == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("CANT FIND DataTable."));
		return FString("NULL");
	}

	/* Used to store the split Unicode */
	TArray<FString> UnicodeList;

	/* This is our result */
	FString Result("");

	/* Split unicode string according to the symbol "\" and convert them to lowercase */
	unicode.ToLower().ParseIntoArray(UnicodeList, TEXT("\\"));

	/* See how many strings are splitted */
	if (UnicodeList.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Empty unicode blank."));
		return FString("NULL");
	}

	/* Translate UnicodeList sentence by sentence, and then append it to our result */
	for (auto& S : UnicodeList)
	{
		S = FString(TEXT("\\")).Append(S);
		Result = Result.Append(UnicodeToCharacter_Single(S, DataTable));
	}

	/* OK */
	return Result;
}

FString UUnicodeHandlerBPLibrary::CharacterToUnicode(const FString& character, const UDataTable* DataTable)
{
	if (DataTable == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("CANT FIND DataTable."));
		return FString("NULL");
	}

	TArray<FString> CharacterList;
	FString Result("");

	for (auto& C : character)
	{
		CharacterList.Add(FString::Chr(C));
	}

	if (CharacterList.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Empty character blank."));
		return FString("NULL");
	}

	for (auto& S : CharacterList)
	{
		Result = Result.Append(CharacterToUnicode_Single(S, DataTable));
	}

	return Result;
}






FString UUnicodeHandlerBPLibrary::UnicodeToCharacter_Single(const FString& unicodeLower, const UDataTable* DataTable)
{
	for (FName RowName : DataTable->GetRowNames())
	{
		FStru_CharacterTable* Info = DataTable->FindRow<FStru_CharacterTable>(RowName, "");
		if (Info)
		{
			if (Info->Unicode.ToLower() == unicodeLower)
			{
				return Info->Character;
			}
		}
	}
	return FString("NULL");
}

FString UUnicodeHandlerBPLibrary::CharacterToUnicode_Single(const FString& character, const UDataTable* DataTable)
{
	for (FName RowName : DataTable->GetRowNames())
	{
		FStru_CharacterTable* Info = DataTable->FindRow<FStru_CharacterTable>(RowName, "");
		if (Info)
		{
			if (Info->Character == character)
			{
				return Info->Unicode.ToLower();
			}
		}
	}

	return FString("NULL");
}
