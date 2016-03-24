/* Generated by RuntimeBrowser.
 */

@protocol GEOMapItemTransitInfo <GEOMapItemTransitSchedule>

@required

- (NSArray *)connections;
- (NSString *)displayName;
- (BOOL)hasTransitIncidentComponent;
- (NSArray *)incidents;
- (BOOL)isTransitIncidentsTTLExpired;
- (NSArray *)labelItems;
- (NSArray *)lines;
- (unsigned int)linesCount;
- (NSArray *)linesForSystem:(id <GEOTransitSystem>)arg1;
- (NSArray *)systems;
- (unsigned int)systemsCount;

@end