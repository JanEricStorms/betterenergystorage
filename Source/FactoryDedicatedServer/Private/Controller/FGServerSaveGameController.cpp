// This file has been automatically generated by the Unreal Header Implementation tool

#include "Controller/FGServerSaveGameController.h"

#include "Server/FGDSSharedTypes.h"

FFGServerErrorResponse UFGServerSaveGameController::Handler_CreateNewGame(const FFGServerNewGameData& NewGameData) const { return FFGServerErrorResponse(); }
void UFGServerSaveGameController::Handler_SaveGame(const FString& SaveName, const FFGRequestHandlerContextWrapper& Context) const {}
void UFGServerSaveGameController::CompleteRequest_SaveGame(const FFGRequestHandlerContextWrapper& Context,const FFGServerErrorResponse& ErrorResponse) {}
void UFGServerSaveGameController::Handler_DeleteSaveFile(const FString& SaveName, const FFGRequestHandlerContextWrapper& Context) {}
void UFGServerSaveGameController::CompleteRequest_DeleteSaveFile(const FFGRequestHandlerContextWrapper& Context, const FFGServerErrorResponse& ErrorResponse) {}
void UFGServerSaveGameController::Handler_DeleteSaveSession(const FString& SessionName, const FFGRequestHandlerContextWrapper& Context) {}
void UFGServerSaveGameController::CompleteRequest_DeleteSaveSession(const FFGRequestHandlerContextWrapper& Context, const FFGServerErrorResponse& ErrorResponse) {}
void UFGServerSaveGameController::Handler_EnumerateSessions(const FFGRequestHandlerContextWrapper& Context) {}
void UFGServerSaveGameController::CompleteRequest_EnumerateSessions(const FFGRequestHandlerContextWrapper& Context, const FFGServerErrorResponse& ErrorResponse, const TArray<FSessionSaveStruct>& Sessions, int32 CurrentSessionIndex) {}
FFGServerErrorResponse UFGServerSaveGameController::Handler_LoadGame(const FString& SaveName, bool bEnableAdvancedGameSettings) const {	return FFGServerErrorResponse(); }
FFGServerErrorResponse UFGServerSaveGameController::Handler_UploadSaveGame(const FString& SaveName,	const FFGMultipartDataWrapper& SaveGameFile, bool bLoadSaveGame, bool bEnableAdvancedGameSettings) const { return FFGServerErrorResponse(); }
FFGServerErrorResponse UFGServerSaveGameController::Handler_DownloadSaveGame(const FString& SaveName, FFGFileResponseWrapper& OutFileResponse) const { return FFGServerErrorResponse(); }