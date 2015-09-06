/*
Copyright 2015 Adam Grandquist

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
 */
/**
 * @author Adam Grandquist
 * @copyright Apache
 */

#import <Cocoa/Cocoa.h>

@interface ReQLCursor : NSObject

-(void * __nonnull)data;

-(BOOL)isOpen;

-(void)observe:(void (^ __nullable)(id __nonnull))next error:(void (^ __nullable)(NSError * __nonnull))error completed:(void (^ __nullable)(void))completed interrupted:(void (^ __nullable)(void))interrupted;

-(void)observe:(void (^ __nonnull)(id __nonnull))next;

-(void)observe:(void (^ __nonnull)(id __nonnull))next completed:(void (^ __nonnull)(void))completed;

-(void)observe:(void (^ __nonnull)(id __nonnull))next completed:(void (^ __nonnull)(void))completed interrupted:(void (^ __nonnull)(void))interrupted;

-(void)observe:(void (^ __nonnull)(id __nonnull))next error:(void (^ __nonnull)(NSError * __nonnull))error;

-(void)observe:(void (^ __nonnull)(id __nonnull))next error:(void (^ __nonnull)(NSError * __nonnull))error completed:(void (^ __nonnull)(void))completed;

-(void)observe:(void (^ __nonnull)(id __nonnull))next error:(void (^ __nonnull)(NSError * __nonnull))error interrupted:(void (^ __nonnull)(void))interrupted;

-(void)observe:(void (^ __nonnull)(id __nonnull))next interrupted:(void (^ __nonnull)(void))interrupted;

-(NSArray * __nullable)toArray;

-(void)start;

-(void)close;

@end
