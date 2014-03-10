Pod::Spec.new do |s|

  s.name         = 'YAUIKit'
  s.version      = '1.1.0'
  s.summary      = 'YAUIKit'
  s.homepage     = 'http://code.dapps.douban.com/YAUIKit'
  s.author       = { 'Douban iOS Developers' => 'ios-dev@douban.com' }
  s.platform     = :ios, '5.0'
  s.source       = {
      :git => 'http://code.dapps.douban.com/YAUIKit.git',
      :tag => s.version.to_s
  }
  s.frameworks    = 'CoreText'
  s.prefix_header_file = 'YAUIKit/YAUIKit/YAUIKit-Prefix.pch'
  s.source_files = 'YAUIKit/YAUIKit/Source/**/*.{c,h,m}'
  s.requires_arc = true

  s.license      = {
      :type => 'Douban',
      :text => <<-LICENSE
      Copyright (c) 2013 Douban, Inc (http://www.douban.com/)
      LICENSE
  }
end