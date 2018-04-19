
Pod::Spec.new do |s|

  s.name         = "wxcore"
  s.version      = "5.0.1"
  s.summary      = "WuXieYun core lib."

  s.description  = <<-DESC
                    Online chat Lib for ios, Helpdesk system
                   DESC

  s.homepage     = "http://wuxieyun.com"
  s.license      = "MIT"
  s.author       = { "jackning" => "270580156@qq.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/pengjinning/wxcore-ios.git", :tag => "#{s.version}" }
  s.vendored_frameworks = "frameworks/cocoapods/wxcore.framework"
  s.requires_arc = true

  s.dependency "FMDB"
  s.dependency "Socket.IO-Client-Swift", "~> 13.1.0"
  s.dependency "AFNetworking"
  s.swift_version = "4.0"

end
