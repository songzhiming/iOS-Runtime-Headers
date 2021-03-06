/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignEntityKey * _foreignEntityKey;
    NSSQLForeignKey * _foreignKey;
    NSSQLForeignOrderKey * _foreignOrderKey;
    BOOL  _isVirtual;
}

- (void)_setForeignOrderKey:(id)arg1;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)foreignEntityKey;
- (id)foreignKey;
- (id)foreignOrderKey;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 inverseToMany:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3;
- (BOOL)isOptional;
- (BOOL)isVirtual;
- (unsigned int)slot;

@end
