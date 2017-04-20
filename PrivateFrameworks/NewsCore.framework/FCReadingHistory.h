/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCReadingHistory : FCPrivateZoneController {
    NSMutableDictionary * _itemsByArticleID;
    NSMutableDictionary * _itemsByIdentifier;
    FCMutexLock * _itemsLock;
}

@property (nonatomic, readonly) NSSet *allConsumedArticleIDs;
@property (nonatomic, readonly) NSSet *allReadArticleIDs;
@property (nonatomic, readonly) NSSet *allSeenArticleIDs;
@property (nonatomic, retain) NSMutableDictionary *itemsByArticleID;
@property (nonatomic, retain) NSMutableDictionary *itemsByIdentifier;
@property (nonatomic, retain) FCMutexLock *itemsLock;

+ (int)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (id)localStoreMigrator;
+ (unsigned int)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)_addHistoryItems:(id)arg1 addToStore:(BOOL)arg2;
- (BOOL)_markArticleAsSeenWithHeadline:(id)arg1 historyItem:(id)arg2 modifiedHistoryFeaturesOut:(unsigned int*)arg3;
- (void)_modifyHistoryForArticleID:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_readingHistoryItemForArticleID:(id)arg1;
- (void)_removeHistoryItemWithItemID:(id)arg1 articleID:(id)arg2;
- (id)_sortedReadingHistoryItemsWithMaxCount:(unsigned int)arg1;
- (void)addObserver:(id)arg1;
- (id)allConsumedArticleIDs;
- (id)allReadArticleIDs;
- (id)allSeenArticleIDs;
- (id)allSortedArticleIDsInReadingHistory;
- (void)clearHistory;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (BOOL)hasArticleBeenConsumed:(id)arg1;
- (BOOL)hasArticleBeenMarkedAsOffensive:(id)arg1;
- (BOOL)hasArticleBeenRead:(id)arg1;
- (BOOL)hasArticleBeenSeen:(id)arg1;
- (BOOL)hasArticleBeenVisited:(id)arg1;
- (id)historyItemsForArticleIDs:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4;
- (id)itemsByArticleID;
- (id)itemsByIdentifier;
- (id)itemsLock;
- (id)lastVisitedDateForArticleID:(id)arg1;
- (unsigned int)likingStatusForArticleID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (void)markArticle:(id)arg1 asArticleConsumed:(BOOL)arg2;
- (void)markArticle:(id)arg1 asOffensive:(BOOL)arg2;
- (BOOL)markArticle:(id)arg1 withLikingStatus:(unsigned int)arg2;
- (void)markArticleAsReadWithHeadline:(id)arg1;
- (BOOL)markArticleAsSeenWithHeadline:(id)arg1;
- (id)mostRecentlyReadArticlesWithMaxCount:(unsigned int)arg1;
- (void)removeArticleFromHistory:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setItemsByArticleID:(id)arg1;
- (void)setItemsByIdentifier:(id)arg1;
- (void)setItemsLock:(id)arg1;
- (id)syncReadingHistoryItemRecords:(id)arg1 didRemoveLastVisitedAt:(out BOOL*)arg2;
- (BOOL)toggleArticleHasBeenConsumed:(id)arg1;
- (BOOL)toggleArticleHasBeenMarkedAsOffensive:(id)arg1;

@end