Pod::Spec.new do |s|
  s.name                      = 'GLMacros'
  s.version                   = '0.3.5'
  s.summary                   = 'xCode Macros'
  s.license 	                = 'MIT'
  s.description               = 'Collection of macro\'s and constants I use in nearly every XCode project'
  s.homepage                  = 'https://github.com/gertjanleemans/GLMacros'
  s.authors                   = {'Gertjan Leemans' => 'gertjan@digitalisma.com'}
  s.source                    = { :git => 'https://github.com/gertjanleemans/GLMacros.git', :tag => '0.3.5' }
  s.source_files              = '*.{h,m}'
  s.platform                  = :ios, :tvos, :watchos
  s.ios.deployment_target     = '7.0'
  s.tvos.deployment_target    = '9.0'
  s.watchos.deployment_target = '2.0'
  s.requires_arc              = true
end
