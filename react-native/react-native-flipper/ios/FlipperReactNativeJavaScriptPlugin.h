/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <FlipperKit/FlipperPlugin.h>
#import <FlipperKit/FlipperConnection.h>

NS_ASSUME_NONNULL_BEGIN

@class FlipperModule;

@interface FlipperReactNativeJavaScriptPlugin : NSObject<FlipperPlugin>

@property (nonatomic, weak) FlipperModule *module;
@property (nonatomic, strong, readonly) id<FlipperConnection> connection;

- (instancetype)initWithFlipperModule:(FlipperModule *)module
                             pluginId:(NSString *)pluginId
                         inBackground:(BOOL)inBackground;

- (BOOL)isConnected;

- (void)fireOnConnect;

@end

NS_ASSUME_NONNULL_END
