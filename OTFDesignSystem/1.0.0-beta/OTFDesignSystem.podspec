Pod::Spec.new do |s|
    s.name             = 'OTFDesignSystem'
    s.version          = '1.0.0-beta'
    s.summary          = 'Design system for health appplications'
    s.homepage         = 'https://github.com/TheraForge/OTFDesignSystem'
    s.license          = { :type => 'BSD-4', :file => 'LICENSE.md' }
    s.author           = { 'Hippocrates Technologies' => 'hippocratestech-dev@googlegroups.com' }
    s.source           = { :git => 'https://github.com/TheraForge/OTFDesignSystem.git', :tag => s.version.to_s }
    s.ios.deployment_target = '14.0'
    s.swift_version = '5.0'
    s.source_files = 'OTFDesignSystem/Sources/OTFDesignSystem/**/*'
  end
