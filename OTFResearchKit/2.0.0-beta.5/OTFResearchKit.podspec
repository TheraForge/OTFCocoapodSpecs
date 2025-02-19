Pod::Spec.new do |s|
  s.name         = 'OTFResearchKit'
  s.version      = '2.0.0-beta.5'
  s.summary      = 'OTFResearchKit is an open source software framework that makes it easy to create apps for medical research or for other research projects.'
  s.homepage     = 'https://www.github.com/ResearchKit/ResearchKit'
  s.documentation_url = 'http://researchkit.github.io/docs/'
  s.license      = { :type => 'BSD', :file => 'LICENSE' }
  s.author       = { 'Hippocrates Technologies' => 'hippocratestech-dev@googlegroups.com' }
  s.source       = { :git => 'https://github.com/TheraForge/OTFResearchKit', :tag => s.version.to_s }
  s.requires_arc = true
  s.swift_version = '5.0'
  s.module_map = "OTFResearchKit/OTFResearchKit.modulemap"
  s.platform     = :ios, '14.6'
  s.default_subspec = 'Care'

  s.subspec 'Care' do |ss|
    ss.name = 'Care'
    ss.source_files = 'OTFResearchKit/**/*.{h,m,swift}'
    ss.resources    = 'OTFResearchKit/**/*.{fsh,vsh}', 'OTFResearchKit/Animations/**/*.m4v', 'OTFResearchKit/Artwork.xcassets', 'OTFResearchKit/Localized/*.lproj'
    ss.public_header_files = `./scripts/find_headers.rb --public`.split("\n")
    ss.private_header_files = `./scripts/find_headers.rb --private`.split("\n")
    ss.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => 'CARE=1'
    }
  end
  s.subspec 'Health' do |ss|
    ss.name = 'Health'
    ss.source_files = 'OTFResearchKit/**/*.{h,m,swift}'
    ss.resources    = 'OTFResearchKit/**/*.{fsh,vsh}', 'OTFResearchKit/Animations/**/*.m4v', 'OTFResearchKit/Artwork.xcassets', 'OTFResearchKit/Localized/*.lproj'
    ss.public_header_files = `./scripts/find_headers.rb --public`.split("\n")
    ss.private_header_files = `./scripts/find_headers.rb --private`.split("\n")
    ss.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => 'HEALTH=1'
    }
  end
  s.subspec 'CareHealth' do |ss|
    ss.name = 'CareHealth'
    ss.source_files = 'OTFResearchKit/**/*.{h,m,swift}'
    ss.resources    = 'OTFResearchKit/**/*.{fsh,vsh}', 'OTFResearchKit/Animations/**/*.m4v', 'OTFResearchKit/Artwork.xcassets', 'OTFResearchKit/Localized/*.lproj'
    ss.public_header_files = `./scripts/find_headers.rb --public`.split("\n")
    ss.private_header_files = `./scripts/find_headers.rb --private`.split("\n")
    ss.pod_target_xcconfig = {
      'GCC_PREPROCESSOR_DEFINITIONS' => ['CARE=1', 'HEALTH=1']
    }
  end
end