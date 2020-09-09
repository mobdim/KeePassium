// Copyright 2018-2019 Yubico AB
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <CoreNFC/CoreNFC.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(11.0))
@protocol YKFNFCNDEFReaderSessionProtocol

@property (nonatomic) NSString *alertMessage;

- (instancetype)initWithDelegate:(id<NFCNDEFReaderSessionDelegate>)delegate
                           queue:(nullable dispatch_queue_t)queue
        invalidateAfterFirstRead:(BOOL)invalidateAfterFirstRead;

- (void)beginSession;

@end

/*
 Allows to define a NFCNDEFReaderSession property as id<YKFNFCNDEFReaderSessionProtocol> to facilitate dependecy injection.
 */
@interface NFCNDEFReaderSession()<YKFNFCNDEFReaderSessionProtocol>
@end

NS_ASSUME_NONNULL_END