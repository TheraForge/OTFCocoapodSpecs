#
# Be sure to run `pod lib lint OTFCloudClientAPI.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'OTFCloudClientAPI'
  s.version          = '1.0.4-beta'
  s.summary          = 'TheraForge Client REST API Framework to Connect to TheraForge Secure CloudBox Backend-as-a-Service (BaaS).'
  s.homepage         = 'https://github.com/TheraForge/OTFCloudClientAPI'
  s.license          = { :type => 'BSD-4', :file => 'LICENSE.md' }
  s.author           = { 'Hippocrates Technologies' => 'hippocratestech-dev@googlegroups.com' }
  s.source           = { :git => 'https://github.com/TheraForge/OTFCloudClientAPI.git', :tag => s.version.to_s }
  s.source_files = 'OTFCloudClientAPI/**/*.{swift,h,m}'
  s.swift_versions = '5.0'
  s.ios.deployment_target = '14.6'
  s.watchos.deployment_target = '8.0'
  s.dependency 'KeychainAccess'
  s.dependency 'OTFCDTDatastore', '2.1.1-beta.4'
  s.dependency 'OTFUtilities', '1.0.1-beta'
end
