Pod::Spec.new do |s|
  s.name                      = 'DigiMacros'
  s.version                   = '1.0.3'
  s.summary                   = 'xCode Macros'
  s.license 	                = 'MIT'
  s.description               = 'Collection of macro\'s and constants we use in nearly every XCode project'
  s.homepage                  = 'https://github.com/Digitalisma/DigiMacros'
  s.authors                   = {'Gertjan Leemans' => 'gertjan@digitalisma.com'}
  s.source                    = { :git => 'https://github.com/Digitalisma/DigiMacros.git', :tag => s.version }
  s.source_files              = '*.{h,m}'
  s.platform                  = :ios, :tvos, :watchos
  s.ios.deployment_target     = '7.0'
  s.tvos.deployment_target    = '9.0'
  s.watchos.deployment_target = '2.0'
  s.requires_arc              = true
end
