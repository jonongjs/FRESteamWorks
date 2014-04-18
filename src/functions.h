/* automatically generated by generateAPI.rb */
/* START GENERATED CODE */
X(AIRSteam_Init) /* = 0 */
X(AIRSteam_RunCallbacks) /* = 1 */
X(AIRSteam_GetUserID) /* = 2 */
X(AIRSteam_GetAppID) /* = 3 */
X(AIRSteam_GetAvailableGameLanguages) /* = 4 */
X(AIRSteam_GetCurrentGameLanguage) /* = 5 */
X(AIRSteam_GetPersonaName) /* = 6 */
X(AIRSteam_UseCrashHandler) /* = 7 */
/* stats/achievements */
X(AIRSteam_RequestStats) /* = 8 */
X(AIRSteam_SetAchievement) /* = 9 */
X(AIRSteam_ClearAchievement) /* = 10 */
X(AIRSteam_IsAchievement) /* = 11 */
X(AIRSteam_GetStatInt) /* = 12 */
X(AIRSteam_GetStatFloat) /* = 13 */
X(AIRSteam_SetStatInt) /* = 14 */
X(AIRSteam_SetStatFloat) /* = 15 */
X(AIRSteam_StoreStats) /* = 16 */
X(AIRSteam_ResetAllStats) /* = 17 */
X(AIRSteam_RequestGlobalStats) /* = 18 */
X(AIRSteam_GetGlobalStatInt) /* = 19 */
X(AIRSteam_GetGlobalStatFloat) /* = 20 */
X(AIRSteam_GetGlobalStatHistoryInt) /* = 21 */
X(AIRSteam_GetGlobalStatHistoryFloat) /* = 22 */
/* leaderboards */
X(AIRSteam_FindLeaderboard) /* = 23 */
X(AIRSteam_FindOrCreateLeaderboard) /* = 24 */
X(AIRSteam_FindLeaderboardResult) /* = 25 */
X(AIRSteam_GetLeaderboardName) /* = 26 */
X(AIRSteam_GetLeaderboardEntryCount) /* = 27 */
X(AIRSteam_GetLeaderboardSortMethod) /* = 28 */
X(AIRSteam_GetLeaderboardDisplayType) /* = 29 */
X(AIRSteam_UploadLeaderboardScore) /* = 30 */
X(AIRSteam_UploadLeaderboardScoreResult) /* = 31 */
X(AIRSteam_DownloadLeaderboardEntries) /* = 32 */
X(AIRSteam_DownloadLeaderboardEntriesResult) /* = 33 */
/* cloud */
X(AIRSteam_GetFileCount) /* = 34 */
X(AIRSteam_GetFileSize) /* = 35 */
X(AIRSteam_FileExists) /* = 36 */
X(AIRSteam_FileWrite) /* = 37 */
X(AIRSteam_FileRead) /* = 38 */
X(AIRSteam_FileDelete) /* = 39 */
X(AIRSteam_FileShare) /* = 40 */
X(AIRSteam_FileShareResult) /* = 41 */
X(AIRSteam_IsCloudEnabledForApp) /* = 42 */
X(AIRSteam_SetCloudEnabledForApp) /* = 43 */
X(AIRSteam_GetQuota) /* = 44 */
/* ugc/workshop */
X(AIRSteam_UGCDownload) /* = 45 */
X(AIRSteam_UGCRead) /* = 46 */
X(AIRSteam_GetUGCDownloadProgress) /* = 47 */
X(AIRSteam_GetUGCDownloadResult) /* = 48 */
X(AIRSteam_PublishWorkshopFile) /* = 49 */
X(AIRSteam_PublishWorkshopFileResult) /* = 50 */
X(AIRSteam_DeletePublishedFile) /* = 51 */
X(AIRSteam_GetPublishedFileDetails) /* = 52 */
X(AIRSteam_GetPublishedFileDetailsResult) /* = 53 */
X(AIRSteam_EnumerateUserPublishedFiles) /* = 54 */
X(AIRSteam_EnumerateUserPublishedFilesResult) /* = 55 */
X(AIRSteam_EnumeratePublishedWorkshopFiles) /* = 56 */
X(AIRSteam_EnumeratePublishedWorkshopFilesResult) /* = 57 */
X(AIRSteam_EnumerateUserSubscribedFiles) /* = 58 */
X(AIRSteam_EnumerateUserSubscribedFilesResult) /* = 59 */
X(AIRSteam_EnumerateUserSharedWorkshopFiles) /* = 60 */
X(AIRSteam_EnumerateUserSharedWorkshopFilesResult) /* = 61 */
X(AIRSteam_EnumeratePublishedFilesByUserAction) /* = 62 */
X(AIRSteam_EnumeratePublishedFilesByUserActionResult) /* = 63 */
X(AIRSteam_SubscribePublishedFile) /* = 64 */
X(AIRSteam_UnsubscribePublishedFile) /* = 65 */
X(AIRSteam_CreatePublishedFileUpdateRequest) /* = 66 */
X(AIRSteam_UpdatePublishedFileFile) /* = 67 */
X(AIRSteam_UpdatePublishedFilePreviewFile) /* = 68 */
X(AIRSteam_UpdatePublishedFileTitle) /* = 69 */
X(AIRSteam_UpdatePublishedFileDescription) /* = 70 */
X(AIRSteam_UpdatePublishedFileSetChangeDescription) /* = 71 */
X(AIRSteam_UpdatePublishedFileVisibility) /* = 72 */
X(AIRSteam_UpdatePublishedFileTags) /* = 73 */
X(AIRSteam_CommitPublishedFileUpdate) /* = 74 */
X(AIRSteam_GetPublishedItemVoteDetails) /* = 75 */
X(AIRSteam_GetPublishedItemVoteDetailsResult) /* = 76 */
X(AIRSteam_GetUserPublishedItemVoteDetails) /* = 77 */
X(AIRSteam_GetUserPublishedItemVoteDetailsResult) /* = 78 */
X(AIRSteam_UpdateUserPublishedItemVote) /* = 79 */
X(AIRSteam_SetUserPublishedFileAction) /* = 80 */
/* friends */
X(AIRSteam_GetFriendCount) /* = 81 */
X(AIRSteam_GetFriendByIndex) /* = 82 */
X(AIRSteam_GetFriendPersonaName) /* = 83 */
/* authentication & ownership */
X(AIRSteam_GetAuthSessionTicket) /* = 84 */
X(AIRSteam_GetAuthSessionTicketResult) /* = 85 */
X(AIRSteam_BeginAuthSession) /* = 86 */
X(AIRSteam_EndAuthSession) /* = 87 */
X(AIRSteam_CancelAuthTicket) /* = 88 */
X(AIRSteam_UserHasLicenseForApp) /* = 89 */
/* overlay */
X(AIRSteam_ActivateGameOverlay) /* = 90 */
X(AIRSteam_ActivateGameOverlayToUser) /* = 91 */
X(AIRSteam_ActivateGameOverlayToWebPage) /* = 92 */
X(AIRSteam_ActivateGameOverlayToStore) /* = 93 */
X(AIRSteam_ActivateGameOverlayInviteDialog) /* = 94 */
X(AIRSteam_IsOverlayEnabled) /* = 95 */
/* DLC / subscriptions */
X(AIRSteam_IsSubscribedApp) /* = 96 */
X(AIRSteam_IsDLCInstalled) /* = 97 */
X(AIRSteam_GetDLCCount) /* = 98 */
X(AIRSteam_InstallDLC) /* = 99 */
X(AIRSteam_UninstallDLC) /* = 100 */
X(AIRSteam_DLCInstalledResult) /* = 101 */
/* other */
X(AIRSteam_GetEnv) /* = 102 */
/* END GENERATED CODE */