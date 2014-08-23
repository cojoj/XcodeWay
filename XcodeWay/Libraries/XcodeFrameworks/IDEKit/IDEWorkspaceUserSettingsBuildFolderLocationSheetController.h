/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "DVTFilePathFieldCellDelegate-Protocol.h"

@class DVTFilePathField, IDEWorkspace, NSMatrix, NSString, NSTextField;

@interface IDEWorkspaceUserSettingsBuildFolderLocationSheetController : NSWindowController <DVTFilePathFieldCellDelegate>
{
    IDEWorkspace *_workspace;
    int _derivedDataLocationStyle;
    NSString *_derivedDataCustomLocation;
    int _buildLocationStyle;
    int _buildSubfolderNameStyle;
    NSString *_buildSubfolderCustomName;
    id <IDEWorkspaceUserSettingsBuildFolderLocationSheetControllerDelegate> _delegate;
    NSMatrix *_buildSubfolderStyleMatrix;
    DVTFilePathField *_buildFolderFilePathLabel;
    NSTextField *_buildSubfolderNameField;
}

+ (id)keyPathsForValuesAffectingBuildFolderAbsolutePath;
+ (id)keyPathsForValuesAffectingBuildFolderDefaultName;
+ (id)keyPathsForValuesAffectingUseBuildFolder;
+ (id)keyPathsForValuesAffectingUseCustomName;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)_updateControlsForCurrentLocationStyle;
@property(readonly) NSString *buildFolderAbsolutePath;
@property(readonly) NSString *buildFolderDefaultLocation;
@property(readonly) NSString *buildFolderDefaultName;
@property int buildLocationStyle; // @synthesize buildLocationStyle=_buildLocationStyle;
@property(copy) NSString *buildSubfolderCustomName; // @synthesize buildSubfolderCustomName=_buildSubfolderCustomName;
@property int buildSubfolderNameStyle; // @synthesize buildSubfolderNameStyle=_buildSubfolderNameStyle;
- (void)closeSheet:(id)arg1;
@property(readonly) int defaultBuildSubfolderNameStyle;
@property(readonly) NSString *defaultCustomSubfolderName;
@property id <IDEWorkspaceUserSettingsBuildFolderLocationSheetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *derivedDataCustomLocation; // @synthesize derivedDataCustomLocation=_derivedDataCustomLocation;
@property int derivedDataLocationStyle; // @synthesize derivedDataLocationStyle=_derivedDataLocationStyle;
- (void)didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)initWithWindow:(id)arg1;
@property IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)showSheetInWindow:(id)arg1;
@property(readonly) BOOL useBuildFolder;
@property(readonly) BOOL useCustomName;
- (BOOL)validateBuildSubfolderCustomName:(id *)arg1 error:(id *)arg2;
- (void)windowDidLoad;

@end
