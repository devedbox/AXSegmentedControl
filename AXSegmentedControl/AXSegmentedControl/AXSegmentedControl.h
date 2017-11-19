//
//  AXSegmentedControl.h
//  AXSegmentedControl
//
//  Created by devedbox on 3/4/15.
//  Copyright (c) 2015 devedbox. All rights reserved.
//  Licence: MIT-Licence
//

#import <UIKit/UIKit.h>

@protocol AXSegmentedControlDelegate;

/// A drop-in replacement for UISegmentedControl showing multiple segment counts, to be used typically on a user profile.
@interface AXSegmentedControl : UIControl <UIBarPositioning>

/// The control's delegate object, conforming to the UIBarPositioning protocol.
@property (nonatomic, weak) id <AXSegmentedControlDelegate> delegate;
/// The items displayed on the control.
@property (nonatomic, retain) NSArray *items;
/// The index number identifying the selected segment (that is, the last segment touched).
@property (nonatomic)           NSInteger selectedSegmentIndex;
/// Returns the number of segments the receiver has.
@property (nonatomic, readonly) NSUInteger numberOfSegments;
/// The height of the control. Default is 56px.
@property (nonatomic, assign) IBInspectable CGFloat minHeight UI_APPEARANCE_SELECTOR;
/// The height of the selection indicator. Default is 2px.
@property (nonatomic, readwrite) IBInspectable CGFloat selectionIndicatorHeight UI_APPEARANCE_SELECTOR;
/// The duration of the indicator's animation. Default is 0.2 sec.
@property (nonatomic, readwrite) IBInspectable CGFloat animationDuration UI_APPEARANCE_SELECTOR;
/// The font family to be used on labels. Default is system font (HelveticaNeue). Font size is managed by the class.
@property (nonatomic, retain) IBInspectable UIFont *font UI_APPEARANCE_SELECTOR;
/// The color of the hairline. Default is light gray. To hide the hairline, just set clipsToBounds to YES, like you would do it for UIToolBar & UINavigationBar.
@property (nonatomic, readwrite) IBInspectable UIColor *hairlineColor UI_APPEARANCE_SELECTOR;
/// The custom number formatter used to format the count values. A default number formatter will be used if this property is nil. If this property is set, it takes precedence over the showsGroupingSeparators flag.
@property (nonatomic, strong)    NSNumberFormatter *numberFormatter;
/// YES to display the count number on top of the titles. Default is YES.
@property (nonatomic) IBInspectable BOOL showsCount UI_APPEARANCE_SELECTOR;
/// YES to adjust the width of the selection indicator on the title width. Default is YES.
@property (nonatomic) IBInspectable BOOL autoAdjustSelectionIndicatorWidth UI_APPEARANCE_SELECTOR;
/// Set to change insets of selectionIndicator. Default is UIEdgeInsetsZero
@property (nonatomic) IBInspectable UIEdgeInsets selectionIndicatorInsets UI_APPEARANCE_SELECTOR;
/// YES if the title should display on top of the count. Default is NO.
@property (nonatomic) IBInspectable BOOL inverseTitles UI_APPEARANCE_SELECTOR;
/// YES to make the selection indicator animation bouncy. Default is NO.
@property (nonatomic) IBInspectable BOOL bouncySelectionIndicator UI_APPEARANCE_SELECTOR;
/// YES to format the counts with grouping separators. Default is NO.
@property (nonatomic) IBInspectable BOOL showsGroupingSeparators UI_APPEARANCE_SELECTOR;
/// YES if the font size should be reduced in order to fit the title string into the segment's width. Default is NO.
@property (nonatomic) IBInspectable BOOL adjustsFontSizeToFitWidth UI_APPEARANCE_SELECTOR;
///
/// Initializes and returns a segmented control with segments having the given titles or images.
/// The returned segmented control is automatically sized to fit its content within the width of its superview.
/// If items is nil, the control will still be created but expecting titles and counts to be assigned.
 
/// @params items An array of NSString objects only.
/// @returns A AXSegmentedControl object or nil if there was a problem in initializing the object.
- (instancetype)initWithItems:(NSArray *)items;
///
/// Sets the tint color of a segment.
///
/// @param tintColor A color to rendered for the segment's background color.
/// @param segment An index number identifying a segment in the control. It must be a number between 0 and the number of segments (numberOfSegments) minus 1; values exceeding this upper range are pinned to it.
- (void)setTintColor:(UIColor *)tintColor forSegmentAtIndex:(NSUInteger)segment;
///
/// Sets the selected without send value change action of a segment.
///
/// @param segment An index number identifying a segment in the control. It must be a number between 0 and the number of segments (numberOfSegments) minus 1; values exceeding this upper range are pinned to it.
- (void)setSelectedSegmentIndexWithoutValueChange:(NSInteger)segmentIndex;
///
/// Sets the title of a segment.
///
/// @param title A string to display in the segment as its title.
/// @param segment An index number identifying a segment in the control. It must be a number between 0 and the number of segments (numberOfSegments) minus 1; values exceeding this upper range are pinned to it.
- (void)setTitle:(NSString *)title forSegmentAtIndex:(NSUInteger)segment;
///
/// Sets the title font for a particular state.
///
/// @param font A font to be rendered for each the segment's state.
/// @param state The state that uses the styled title. The possible values are described in UIControlState.
- (void)setTitleFont:(UIFont *)font forState:(UIControlState)state;
///
/// Sets the title color for a particular state.
///
/// @param color A color to be rendered for each the segment's state.
/// @param state The state that uses the styled title. The possible values are described in UIControlState.
- (void)setTitleColor:(UIColor *)color forState:(UIControlState)state;
///
/// Sets the count of a segment.
///
/// @param count A number to display in the segment as its count.
/// @param segment An index number identifying a segment in the control. It must be a number between 0 and the number of segments (numberOfSegments) minus 1; values exceeding this upper range are pinned to it.
- (void)setCount:(NSNumber *)count forSegmentAtIndex:(NSUInteger)segment;
///
/// Whether show count of a segment.
///
/// @param count A boolean whether show count.
/// @param segment An index number identifying a segment in the control. It must be a number between 0 and the number of segments (numberOfSegments) minus 1; values exceeding this upper range are pinned to it.
- (void)setShowCount:(BOOL)count forSegmentAtIndex:(NSUInteger)segment;
///
/// Enables the specified segment.
///
/// @param enabled YES to enable the specified segment or NO to disable the segment. By default, segments are enabled.
/// @param segment An index number identifying a segment in the control. It must be a number between 0 and the number of segments (numberOfSegments) minus 1; values exceeding this upper range are pinned to it.
- (void)setEnabled:(BOOL)enabled forSegmentAtIndex:(NSUInteger)segment;
///
/// Returns the title of the specified segment.
///
/// @param segment An index number identifying a segment in the control. It must be a number between 0 and the number of segments (numberOfSegments) minus 1; values exceeding this upper range are pinned to it.
/// @returns Returns the string (title) assigned to the receiver as content. If no title has been set, it returns nil.
- (NSString *)titleForSegmentAtIndex:(NSUInteger)segment;
///
/// Returns the count of the specified segment.
///
/// @param segment An index number identifying a segment in the control. It must be a number between 0 and the number of segments (numberOfSegments) minus 1; values exceeding this upper range are pinned to it.
/// @returns Returns the number (count) assigned to the receiver as content. If no count has been set, it returns 0.
- (NSNumber *)countForSegmentAtIndex:(NSUInteger)segment;
///
/// Removes all segments of the receiver
- (void)removeAllSegments;
@end
///
/// The AXSegmentedControlDelegate protocol defines the interface that AXSegmentedControl delegate objects implement to manage the segmented control behavior. This protocol declares no methods of its own but conforms to the UIBarPositioningDelegate protocol to support the positioning of a segmented control when it is moved to a window.
@protocol AXSegmentedControlDelegate <UIBarPositioningDelegate>
@end
