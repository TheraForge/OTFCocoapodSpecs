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


#import <OTFResearchKit/ORKDefines.h>
#import <OTFResearchKit/ORKTypes.h>

#import <OTFResearchKit/ORKStep.h>
#import <OTFResearchKit/ORKActiveStep.h>
#import <OTFResearchKit/ORKConsentReviewStep.h>
#import <OTFResearchKit/ORKConsentSharingStep.h>
#import <OTFResearchKit/ORKFormStep.h>
#import <OTFResearchKit/ORKImageCaptureStep.h>
#import <OTFResearchKit/ORKInstructionStep.h>
#import <OTFResearchKit/ORKLoginStep.h>
#import <OTFResearchKit/ORKNavigablePageStep.h>
#import <OTFResearchKit/ORKPageStep.h>
#import <OTFResearchKit/ORKPasscodeStep.h>
#import <OTFResearchKit/ORKPDFViewerStep.h>
#import <OTFResearchKit/ORKQuestionStep.h>
#import <OTFResearchKit/ORKRegistrationStep.h>
#import <OTFResearchKit/ORKReviewStep.h>
#import <OTFResearchKit/ORKSignatureStep.h>
#import <OTFResearchKit/ORKTableStep.h>
#import <OTFResearchKit/ORKTouchAnywhereStep.h>
#import <OTFResearchKit/ORKVerificationStep.h>
#import <OTFResearchKit/ORKVideoCaptureStep.h>
#import <OTFResearchKit/ORKVisualConsentStep.h>
#import <OTFResearchKit/ORKWaitStep.h>
#import <OTFResearchKit/ORKVideoInstructionStep.h>
#import <OTFResearchKit/ORKFrontFacingCameraStep.h>
#import <OTFResearchKit/ORKWebViewStep.h>
#import <OTFResearchKit/ORKCustomStep.h>
#import <OTFResearchKit/ORKEnvironmentSPLMeterStep.h>
#import <OTFResearchKit/ORKLearnMoreInstructionStep.h>
#import <OTFResearchKit/ORKSecondaryTaskStep.h>
#import <OTFResearchKit/ORKRequestPermissionsStep.h>
#import <OTFResearchKit/ORK3DModelStep.h>


#import <OTFResearchKit/ORKTask.h>
#import <OTFResearchKit/ORKOrderedTask.h>
#import <OTFResearchKit/ORKOrderedTask+ORKPredefinedActiveTask.h>
#import <OTFResearchKit/ORKNavigableOrderedTask.h>
#import <OTFResearchKit/ORKStepNavigationRule.h>

#import <OTFResearchKit/ORKAnswerFormat.h>
#import <OTFResearchKit/ORKHealthAnswerFormat.h>

#import <OTFResearchKit/ORKResult.h>
#import <OTFResearchKit/ORKActiveTaskResult.h>
#import <OTFResearchKit/ORKCollectionResult.h>
#import <OTFResearchKit/ORKConsentSignatureResult.h>
#import <OTFResearchKit/ORKFrontFacingCameraStepResult.h>
#import <OTFResearchKit/ORKPasscodeResult.h>
#import <OTFResearchKit/ORKQuestionResult.h>
#import <OTFResearchKit/ORKSignatureResult.h>
#import <OTFResearchKit/ORKVideoInstructionStepResult.h>
#import <OTFResearchKit/ORKWebViewStepResult.h>
#import <OTFResearchKit/ORKEnvironmentSPLMeterResult.h>
#import <OTFResearchKit/ORKResultPredicate.h>
#import <OTFResearchKit/ORKUSDZModelManagerResult.h>

#import <OTFResearchKit/ORKTextButton.h>
#import <OTFResearchKit/ORKBorderedButton.h>
#import <OTFResearchKit/ORKContinueButton.h>
#import <OTFResearchKit/ORKPlaybackButton.h>

#import <OTFResearchKit/ORKCustomSignatureFooterView.h>

#import <OTFResearchKit/ORKStepViewController.h>
#import <OTFResearchKit/ORKActiveStepViewController.h>
#import <OTFResearchKit/ORKCompletionStepViewController.h>
#import <OTFResearchKit/ORKFormStepViewController.h>
#import <OTFResearchKit/ORKInstructionStepViewController.h>
#import <OTFResearchKit/ORKLoginStepViewController.h>
#import <OTFResearchKit/ORKPageStepViewController.h>
#import <OTFResearchKit/ORKPasscodeViewController.h>
#import <OTFResearchKit/ORKPDFViewerStepViewController.h>
#import <OTFResearchKit/ORKQuestionStepViewController.h>
#import <OTFResearchKit/ORKTableStepViewController.h>
#import <OTFResearchKit/ORKTaskViewController.h>
#import <OTFResearchKit/ORKTouchAnywhereStepViewController.h>
#import <OTFResearchKit/ORKVerificationStepViewController.h>
#import <OTFResearchKit/ORKWaitStepViewController.h>
#import <OTFResearchKit/ORKWebViewStepViewController.h>
#import <OTFResearchKit/ORKReviewViewController.h>
#import <OTFResearchKit/ORKCustomStepViewController.h>

#import <OTFResearchKit/ORKRecorder.h>

#import <OTFResearchKit/ORKConsentDocument.h>
#import <OTFResearchKit/ORKConsentSection.h>
#import <OTFResearchKit/ORKConsentSignature.h>

#import <OTFResearchKit/ORKKeychainWrapper.h>

#import <OTFResearchKit/ORKChartTypes.h>
#import <OTFResearchKit/ORKBarGraphChartView.h>
#import <OTFResearchKit/ORKDiscreteGraphChartView.h>
#import <OTFResearchKit/ORKLineGraphChartView.h>
#import <OTFResearchKit/ORKPieChartView.h>

#import <OTFResearchKit/ORKBodyItem.h>
#import <OTFResearchKit/ORKLearnMoreItem.h>

#import <OTFResearchKit/ORKDataCollectionManager.h>
#import <OTFResearchKit/ORKCollector.h>

#import <OTFResearchKit/ORKTouchAbilityTouch.h>
#import <OTFResearchKit/ORKTouchAbilityTrack.h>
#import <OTFResearchKit/ORKTouchAbilityGestureRecoginzerEvent.h>
#import <OTFResearchKit/ORKTouchAbilityTrial.h>
#import <OTFResearchKit/ORKTouchAbilityTapTrial.h>
#import <OTFResearchKit/ORKTouchAbilityLongPressTrial.h>
#import <OTFResearchKit/ORKTouchAbilitySwipeTrial.h>
#import <OTFResearchKit/ORKTouchAbilityScrollTrial.h>
#import <OTFResearchKit/ORKTouchAbilityPinchTrial.h>
#import <OTFResearchKit/ORKTouchAbilityRotationTrial.h>

#import <OTFResearchKit/ORK3DModelManager.h>
#import <OTFResearchKit/ORKUSDZModelManager.h>
#import <OTFResearchKit/ORKPermissionType.h>
#import <OTFResearchKit/ORKHealthKitPermissionType.h>

#import <OTFResearchKit/ORKDeprecated.h>
