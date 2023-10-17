/*
 * Copyright 2023 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "FirebaseAuth/Sources/Backend/FIRAuthRPCResponse.h"

NS_ASSUME_NONNULL_BEGIN

/**
 @class FIRFinalizePasskeyEnrollmentResponse
 @brief Represents the response from the startPasskeyEnrollment endpoint.
 */
@interface FIRFinalizePasskeyEnrollmentResponse : NSObject <FIRAuthRPCResponse>

/**
 @property idToken
 @brief The user raw access token.
 */
@property(nonatomic, readonly, copy) NSString *idToken;

/**
 @property refershToken
 @brief Refresh token for the authenticated user.
 */
@property(nonatomic, copy, readonly) NSString *refreshToken;

@end

NS_ASSUME_NONNULL_END