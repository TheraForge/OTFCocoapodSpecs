/*
 Copyright (c) 2015, Apple Inc. All rights reserved.
 
 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:
 
 1.  Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 
 2.  Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation and/or
 other materials provided with the distribution.
 
 3.  Neither the name of the copyright holder(s) nor the names of any contributors
 may be used to endorse or promote products derived from this software without
 specific prior written permission. No license is granted to the trademarks of
 the copyright holders even if such marks are included in this software.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#import <OTFResearchKit/ORKResult.h>


NS_ASSUME_NONNULL_BEGIN

@class ORKConsentSignature;
@class ORKConsentDocument;

/**
 The `ORKConsentSignatureResult` class represents a signature obtained during
 a consent review step (`ORKConsentReviewStep`). The consent signature result is usually found as a child result of the
 `ORKStepResult` object for the consent review step.
 
 You can apply the result to a document to facilitate the generation of a
 PDF including the signature, or for presentation in a follow-on
 consent review.
 
 A consent signature result is typically generated by the framework as the task proceeds. When the task
 completes, it may be appropriate to serialize it for transmission to a server,
 or to immediately perform analysis on it.
 */
ORK_CLASS_AVAILABLE
@interface ORKConsentSignatureResult : ORKResult

/**
 A copy of the signature obtained.
 
 The signature is a copy of the `signature` property in the originating
 `ORKConsentReviewStep` object, but also includes any name or signature image collected during
 the consent review step.
 */
@property (nonatomic, copy, nullable) ORKConsentSignature *signature;

/**
 A boolean value indicating whether the participant consented.
 
 `YES` if the user confirmed consent to the contents of the consent review. Note
 that the signature could still be invalid if the name or signature image is
 empty; this indicates only that the user gave a positive acknowledgement of the
 document.
 */
@property (nonatomic, assign) BOOL consented;

/**
 Applies the signature to the consent document.
 
 This method uses the identifier to look up the matching signature placeholder
 in the consent document and replaces it with this signature. It may throw an exception if
 the document does not contain a signature with a matching identifier.
 
 @param document     The document to which to apply the signature.
 */
- (void)applyToDocument:(ORKConsentDocument *)document;

@end

NS_ASSUME_NONNULL_END
