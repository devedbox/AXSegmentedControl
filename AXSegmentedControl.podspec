
Pod::Spec.new do |s|

s.name         = "AXSegmentedControl"
s.version      = "0.0.3"
s.summary      = "`AXSegmentedControl` is an iOS customizable segmneted control that displays segmented title."

s.description  = <<-DESC
               `AXSegmentedControl` is an iOS customizable segmneted control that displays segmented title text and the count of control.
               DESC
s.homepage     = "https://github.com/devedbox/AXSegmentedControl"
  # s.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"
  # s.license      = "MIT"
s.license      = { :type => "MIT", :file => "LICENSE" }
s.author             = { "艾星" => "862099730@qq.com" }
  # Or just: s.author    = "aiXing"
  # s.authors            = { "aiXing" => "862099730@qq.com" }
  # s.social_media_url   = "http://twitter.com/aiXing"
  # s.platform     = :ios
s.platform     = :ios, "7.0"
  # s.ios.deployment_target = “7.0”
  # s.osx.deployment_target = "10.7"
  # s.watchos.deployment_target = "2.0"
s.source       = { :git => "https://github.com/devedbox/AXSegmentedControl.git", :tag => s.version }
s.source_files  = "AXSegmentedControl/AXSegmentedControl/*.{h,m}"
  #s.exclude_files = "Classes/Exclude"
  # s.public_header_files = "Classes/**/*.h"
  # s.resource  = "AXSegmentedControl/AXSegmentedControl/AXSegmentedControl.bundle"
  # s.resources = "Resources/*.png"
  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"
  # s.framework  = "SomeFramework"
s.frameworks = "UIKit", "Foundation"
  # s.library   = "iconv"
  # s.libraries = "iconv", "xml2"
s.requires_arc = true
  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency 'AGGeometryKit+POP'
  # s.dependency 'pop', '~> 1.0.4'
  # s.dependency 'AGGeometryKit', '~> 1.0'

end
