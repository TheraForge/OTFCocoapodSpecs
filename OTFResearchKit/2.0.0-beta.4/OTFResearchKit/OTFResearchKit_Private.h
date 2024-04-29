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


#import <OTFResearchKit/ORKHelpers_Private.h>
#import <OTFResearchKit/ORKHelpers_Internal.h>

// Active step support
#import <OTFResearchKit/ORKDataLogger.h>
#import <OTFResearchKit/ORKErrors.h>

#import <OTFResearchKit/ORKChoiceViewCell.h>
#import <OTFResearchKit/ORKChoiceViewCell_Internal.h>
#import <OTFResearchKit/ORKAnswerFormat_Private.h>
#import <OTFResearchKit/ORKConsentDocument_Private.h>
#import <OTFResearchKit/ORKConsentSection_Private.h>
#import <OTFResearchKit/ORKHTMLPDFPageRenderer.h>
#import <OTFResearchKit/ORKOrderedTask_Private.h>
#import <OTFResearchKit/ORKPageStep_Private.h>
#import <OTFResearchKit/ORKRecorder_Private.h>
#import <OTFResearchKit/ORKStepNavigationRule_Private.h>

#import <OTFResearchKit/ORKAudioLevelNavigationRule.h>

#import <OTFResearchKit/ORKCollectionResult_Private.h>
#import <OTFResearchKit/ORKQuestionResult_Private.h>
#import <OTFResearchKit/ORKSignatureResult_Private.h>
#import <OTFResearchKit/ORKResult_Private.h>
#import <OTFResearchKit/ORKStepContainerView_Private.h>

#import <OTFResearchKit/ORKAudioStep.h>
#import <OTFResearchKit/ORKAmslerGridStep.h>
#import <OTFResearchKit/ORKCompletionStep.h>
#import <OTFResearchKit/ORKCountdownStep.h>
#import <OTFResearchKit/ORKFitnessStep.h>
#import <OTFResearchKit/ORKHolePegTestPlaceStep.h>
#import <OTFResearchKit/ORKHolePegTestRemoveStep.h>
#import <OTFResearchKit/ORKPSATStep.h>
#import <OTFResearchKit/ORKRangeOfMotionStep.h>
#import <OTFResearchKit/ORKReactionTimeStep.h>
#import <OTFResearchKit/ORKShoulderRangeOfMotionStep.h>
#import <OTFResearchKit/ORKSpatialSpanMemoryStep.h>
#import <OTFResearchKit/ORKStroopStep.h>
#import <OTFResearchKit/ORKTappingIntervalStep.h>
#import <OTFResearchKit/ORKTimedWalkStep.h>
#import <OTFResearchKit/ORKToneAudiometryStep.h>
#import <OTFResearchKit/ORKdBHLToneAudiometryStep.h>
#import <OTFResearchKit/ORKdBHLToneAudiometryOnboardingStep.h>
#import <OTFResearchKit/ORKTowerOfHanoiStep.h>
#import <OTFResearchKit/ORKTrailmakingStep.h>
#import <OTFResearchKit/ORKWalkingTaskStep.h>
#import <OTFResearchKit/ORKSpeechRecognitionStep.h>
#import <OTFResearchKit/ORKSpeechInNoiseStep.h>
#import <OTFResearchKit/ORKTouchAbilityTapStep.h>
#import <OTFResearchKit/ORKTouchAbilityLongPressStep.h>
#import <OTFResearchKit/ORKTouchAbilitySwipeStep.h>
#import <OTFResearchKit/ORKTouchAbilityScrollStep.h>
#import <OTFResearchKit/ORKTouchAbilityPinchStep.h>
#import <OTFResearchKit/ORKTouchAbilityRotationStep.h>

#import <OTFResearchKit/ORKTaskViewController_Private.h>
#import <OTFResearchKit/ORKFormStepViewController_Private.h>
#import <OTFResearchKit/ORKQuestionStepViewController_Private.h>
#import <OTFResearchKit/ORKPasscodeStepViewController_Internal.h>
#import <OTFResearchKit/ORKInstructionStepViewController_Internal.h>

#import <OTFResearchKit/ORKAudioStepViewController.h>
#import <OTFResearchKit/ORKAmslerGridStepViewController.h>
#import <OTFResearchKit/ORKConsentReviewStepViewController.h>
#import <OTFResearchKit/ORKConsentSharingStepViewController.h>
#import <OTFResearchKit/ORKCountdownStepViewController.h>
#import <OTFResearchKit/ORKFitnessStepViewController.h>
#import <OTFResearchKit/ORKHolePegTestPlaceStepViewController.h>
#import <OTFResearchKit/ORKHolePegTestRemoveStepViewController.h>
#import <OTFResearchKit/ORKImageCaptureStepViewController.h>
#import <OTFResearchKit/ORKPasscodeStepViewController.h>
#import <OTFResearchKit/ORKPSATStepViewController.h>
#import <OTFResearchKit/ORKReviewStepViewController.h>
#import <OTFResearchKit/ORKSignatureStepViewController.h>
#import <OTFResearchKit/ORKSpatialSpanMemoryStepViewController.h>
#import <OTFResearchKit/ORKStroopStepViewController.h>
#import <OTFResearchKit/ORKTappingIntervalStepViewController.h>
#import <OTFResearchKit/ORKToneAudiometryStepViewController.h>
#import <OTFResearchKit/ORKTimedWalkStepViewController.h>
#import <OTFResearchKit/ORKVisualConsentStepViewController.h>
#import <OTFResearchKit/ORKWalkingTaskStepViewController.h>
#import <OTFResearchKit/ORKVideoInstructionStepViewController.h>
#import <OTFResearchKit/ORKSpeechRecognitionStepViewController.h>
#import <OTFResearchKit/ORKLearnMoreStepViewController.h>

#import <OTFResearchKit/ORKAccelerometerRecorder.h>
#import <OTFResearchKit/ORKAudioRecorder.h>
#import <OTFResearchKit/ORKStreamingAudioRecorder.h>
#import <OTFResearchKit/ORKDeviceMotionRecorder.h>
#import <OTFResearchKit/ORKHealthQuantityTypeRecorder.h>
#import <OTFResearchKit/ORKHealthClinicalTypeRecorder.h>
#import <OTFResearchKit/ORKLocationRecorder.h>
#import <OTFResearchKit/ORKPedometerRecorder.h>
#import <OTFResearchKit/ORKTouchRecorder.h>
#import <OTFResearchKit/ORKHTMLPDFPageRenderer.h>

// For custom steps
#import <OTFResearchKit/ORKStepView_Private.h>
#import <OTFResearchKit/ORKCustomStepView.h>
#import <OTFResearchKit/ORKTappingContentView.h>
#import <OTFResearchKit/ORKVerticalContainerView.h>
#import <OTFResearchKit/ORKVerticalContainerView_Internal.h>
#import <OTFResearchKit/ORKStepContainerView.h>
#import <OTFResearchKit/ORKNavigationContainerView.h>
#import <OTFResearchKit/ORKNavigationContainerView_Internal.h>
#import <OTFResearchKit/ORKStepHeaderView.h>
#import <OTFResearchKit/ORKStepHeaderView_Internal.h>
#import <OTFResearchKit/ORKTintedImageView.h>
#import <OTFResearchKit/ORKActiveStepView.h>
#import <OTFResearchKit/ORKDirectionView.h>
#import <OTFResearchKit/ORKSeparatorView.h>
#import <OTFResearchKit/ORKActiveStepQuantityView.h>
#import <OTFResearchKit/ORKCustomStepView_Internal.h>
#import <OTFResearchKit/ORKRingView.h>
#import <OTFResearchKit/ORKProgressView.h>
#import <OTFResearchKit/ORKFreehandDrawingView.h>
#import <OTFResearchKit/ORKAudioGraphView.h>
#import <OTFResearchKit/ORKInstructionStepContainerView.h>

#import <OTFResearchKit/ORKLabel.h>
#import <OTFResearchKit/ORKUnitLabel.h>
#import <OTFResearchKit/ORKHeadlineLabel.h>
#import <OTFResearchKit/ORKSubheadlineLabel.h>
#import <OTFResearchKit/ORKTapCountLabel.h>
#import <OTFResearchKit/ORKFootnoteLabel.h>

#import <OTFResearchKit/ORKActiveStep_Internal.h>
#import <OTFResearchKit/ORKStep_Private.h>
#import <OTFResearchKit/ORKActiveStepViewController_Internal.h>
#import <OTFResearchKit/ORKStepViewController_Internal.h>
#import <OTFResearchKit/ORKTaskViewController_Internal.h>

#import <OTFResearchKit/ORKAccessibility.h>
#import <OTFResearchKit/ORKAccessibilityFunctions.h>
#import <OTFResearchKit/ORKGraphChartAccessibilityElement.h>
#import <OTFResearchKit/UIView+ORKAccessibility.h>

#import <OTFResearchKit/ORKRoundTappingButton.h>
#import <OTFResearchKit/ORKActiveStepTimer.h>
#import <OTFResearchKit/ORKSkin.h>
#import <OTFResearchKit/ORKDefaultFont.h>
#import <OTFResearchKit/ORKVoiceEngine.h>

#import <OTFResearchKit/ORKLearnMoreView.h>
#import <OTFResearchKit/ORKBodyContainerView.h>
