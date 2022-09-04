// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnicodeHandler/Public/UnicodeHandlerBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnicodeHandlerBPLibrary() {}
// Cross Module References
	UNICODEHANDLER_API UScriptStruct* Z_Construct_UScriptStruct_FStru_CharacterTable();
	UPackage* Z_Construct_UPackage__Script_UnicodeHandler();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UNICODEHANDLER_API UClass* Z_Construct_UClass_UUnicodeHandlerBPLibrary_NoRegister();
	UNICODEHANDLER_API UClass* Z_Construct_UClass_UUnicodeHandlerBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStru_CharacterTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStru_CharacterTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Stru_CharacterTable;
class UScriptStruct* FStru_CharacterTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Stru_CharacterTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Stru_CharacterTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStru_CharacterTable, Z_Construct_UPackage__Script_UnicodeHandler(), TEXT("Stru_CharacterTable"));
	}
	return Z_Registration_Info_UScriptStruct_Stru_CharacterTable.OuterSingleton;
}
template<> UNICODEHANDLER_API UScriptStruct* StaticStruct<FStru_CharacterTable>()
{
	return FStru_CharacterTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStru_CharacterTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Unicode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Unicode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnicodeHandlerBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStru_CharacterTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Unicode_MetaData[] = {
		{ "Category", "Unicode Convert" },
		{ "ModuleRelativePath", "Public/UnicodeHandlerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Unicode = { "Unicode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStru_CharacterTable, Unicode), METADATA_PARAMS(Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Unicode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Unicode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "Unicode Convert" },
		{ "ModuleRelativePath", "Public/UnicodeHandlerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStru_CharacterTable, Character), METADATA_PARAMS(Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Unicode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewProp_Character,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnicodeHandler,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Stru_CharacterTable",
		sizeof(FStru_CharacterTable),
		alignof(FStru_CharacterTable),
		Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStru_CharacterTable()
	{
		if (!Z_Registration_Info_UScriptStruct_Stru_CharacterTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Stru_CharacterTable.InnerSingleton, Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Stru_CharacterTable.InnerSingleton;
	}
	DEFINE_FUNCTION(UUnicodeHandlerBPLibrary::execCharacterToUnicode_Single)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_character);
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUnicodeHandlerBPLibrary::CharacterToUnicode_Single(Z_Param_character,Z_Param_DataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnicodeHandlerBPLibrary::execUnicodeToCharacter_Single)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_unicodeLower);
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUnicodeHandlerBPLibrary::UnicodeToCharacter_Single(Z_Param_unicodeLower,Z_Param_DataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnicodeHandlerBPLibrary::execCharacterToUnicode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_unicode);
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUnicodeHandlerBPLibrary::CharacterToUnicode(Z_Param_unicode,Z_Param_DataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnicodeHandlerBPLibrary::execUnicodeToCharacter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_unicode);
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUnicodeHandlerBPLibrary::UnicodeToCharacter(Z_Param_unicode,Z_Param_DataTable);
		P_NATIVE_END;
	}
	void UUnicodeHandlerBPLibrary::StaticRegisterNativesUUnicodeHandlerBPLibrary()
	{
		UClass* Class = UUnicodeHandlerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CharacterToUnicode", &UUnicodeHandlerBPLibrary::execCharacterToUnicode },
			{ "CharacterToUnicode_Single", &UUnicodeHandlerBPLibrary::execCharacterToUnicode_Single },
			{ "UnicodeToCharacter", &UUnicodeHandlerBPLibrary::execUnicodeToCharacter },
			{ "UnicodeToCharacter_Single", &UUnicodeHandlerBPLibrary::execUnicodeToCharacter_Single },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics
	{
		struct UnicodeHandlerBPLibrary_eventCharacterToUnicode_Parms
		{
			FString unicode;
			const UDataTable* DataTable;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unicode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_unicode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_unicode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_unicode = { "unicode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventCharacterToUnicode_Parms, unicode), METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_unicode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_unicode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventCharacterToUnicode_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_DataTable_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventCharacterToUnicode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_unicode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unicode Convert" },
		{ "Comment", "/* If it cannot be converted, \"NULL\" will be returned and an error will be logged. */" },
		{ "DisplayName", "Character To Unicode" },
		{ "ModuleRelativePath", "Public/UnicodeHandlerBPLibrary.h" },
		{ "ToolTip", "If it cannot be converted, \"NULL\" will be returned and an error will be logged." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnicodeHandlerBPLibrary, nullptr, "CharacterToUnicode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::UnicodeHandlerBPLibrary_eventCharacterToUnicode_Parms), Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics
	{
		struct UnicodeHandlerBPLibrary_eventCharacterToUnicode_Single_Parms
		{
			FString character;
			const UDataTable* DataTable;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_character_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventCharacterToUnicode_Single_Parms, character), METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventCharacterToUnicode_Single_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_DataTable_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventCharacterToUnicode_Single_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unicode Convert" },
		{ "ModuleRelativePath", "Public/UnicodeHandlerBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnicodeHandlerBPLibrary, nullptr, "CharacterToUnicode_Single", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::UnicodeHandlerBPLibrary_eventCharacterToUnicode_Single_Parms), Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics
	{
		struct UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Parms
		{
			FString unicode;
			const UDataTable* DataTable;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unicode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_unicode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_unicode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_unicode = { "unicode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Parms, unicode), METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_unicode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_unicode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_DataTable_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_unicode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unicode Convert" },
		{ "Comment", "// If it cannot be converted, \"NULL\" will be returned and an error will be logged.\n" },
		{ "DisplayName", "Unicode To Character" },
		{ "ModuleRelativePath", "Public/UnicodeHandlerBPLibrary.h" },
		{ "ToolTip", "If it cannot be converted, \"NULL\" will be returned and an error will be logged." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnicodeHandlerBPLibrary, nullptr, "UnicodeToCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Parms), Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics
	{
		struct UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Single_Parms
		{
			FString unicodeLower;
			const UDataTable* DataTable;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unicodeLower_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_unicodeLower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_unicodeLower_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_unicodeLower = { "unicodeLower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Single_Parms, unicodeLower), METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_unicodeLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_unicodeLower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Single_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_DataTable_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Single_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_unicodeLower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unicode Convert" },
		{ "Comment", "/* for single character */" },
		{ "ModuleRelativePath", "Public/UnicodeHandlerBPLibrary.h" },
		{ "ToolTip", "for single character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnicodeHandlerBPLibrary, nullptr, "UnicodeToCharacter_Single", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::UnicodeHandlerBPLibrary_eventUnicodeToCharacter_Single_Parms), Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnicodeHandlerBPLibrary);
	UClass* Z_Construct_UClass_UUnicodeHandlerBPLibrary_NoRegister()
	{
		return UUnicodeHandlerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUnicodeHandlerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnicodeHandlerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnicodeHandler,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnicodeHandlerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode, "CharacterToUnicode" }, // 4123079443
		{ &Z_Construct_UFunction_UUnicodeHandlerBPLibrary_CharacterToUnicode_Single, "CharacterToUnicode_Single" }, // 3341537796
		{ &Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter, "UnicodeToCharacter" }, // 4191927695
		{ &Z_Construct_UFunction_UUnicodeHandlerBPLibrary_UnicodeToCharacter_Single, "UnicodeToCharacter_Single" }, // 3970948898
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnicodeHandlerBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnicodeHandlerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/UnicodeHandlerBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnicodeHandlerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnicodeHandlerBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnicodeHandlerBPLibrary_Statics::ClassParams = {
		&UUnicodeHandlerBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnicodeHandlerBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnicodeHandlerBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnicodeHandlerBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UUnicodeHandlerBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnicodeHandlerBPLibrary.OuterSingleton, Z_Construct_UClass_UUnicodeHandlerBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnicodeHandlerBPLibrary.OuterSingleton;
	}
	template<> UNICODEHANDLER_API UClass* StaticClass<UUnicodeHandlerBPLibrary>()
	{
		return UUnicodeHandlerBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnicodeHandlerBPLibrary);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_UnicodeHandler_Source_UnicodeHandler_Public_UnicodeHandlerBPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnicodeHandler_Source_UnicodeHandler_Public_UnicodeHandlerBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FStru_CharacterTable::StaticStruct, Z_Construct_UScriptStruct_FStru_CharacterTable_Statics::NewStructOps, TEXT("Stru_CharacterTable"), &Z_Registration_Info_UScriptStruct_Stru_CharacterTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStru_CharacterTable), 3249245815U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnicodeHandler_Source_UnicodeHandler_Public_UnicodeHandlerBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnicodeHandlerBPLibrary, UUnicodeHandlerBPLibrary::StaticClass, TEXT("UUnicodeHandlerBPLibrary"), &Z_Registration_Info_UClass_UUnicodeHandlerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnicodeHandlerBPLibrary), 2181334175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_UnicodeHandler_Source_UnicodeHandler_Public_UnicodeHandlerBPLibrary_h_1483271868(TEXT("/Script/UnicodeHandler"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UnicodeHandler_Source_UnicodeHandler_Public_UnicodeHandlerBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UnicodeHandler_Source_UnicodeHandler_Public_UnicodeHandlerBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_UnicodeHandler_Source_UnicodeHandler_Public_UnicodeHandlerBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_UnicodeHandler_Source_UnicodeHandler_Public_UnicodeHandlerBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
