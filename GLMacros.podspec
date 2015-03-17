Pod::Spec.new do |s|
  s.name           = 'GLMacros'
  s.version        = '0.3.2'
  s.summary        = 'xCode Macros'
  s.license 	   = 'MIT'
  s.description    = 'Collection of macro\'s and constants I use in nearly every XCode project'
  s.homepage       = 'https://github.com/gertjanleemans/GLMacros'
  s.authors        = {'Gertjan Leemans' => 'gertjan@digitalisma.com'}
  s.source         = { :git => 'https://github.com/gertjanleemans/GLMacros.git', :tag => '0.3.2' }
  s.source_files   = '*.{h,m}'  
  s.platform       = :ios
  s.requires_arc   = true
end
