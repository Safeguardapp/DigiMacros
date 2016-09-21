#define RACReturnCommand(value) [[RACCommand alloc] initWithSignalBlock:^RACSignal *(id input) { \
  return [RACSignal return:value];                                                               \
}]

#define RACReturnEnabledCommand(value, enabled) [[RACCommand alloc] initWithEnabled:enabled signalBlock:^RACSignal *(id input) { \
  return [RACSignal return:value];                                                                                               \
}];

#define RACReturnInputCommand() [[RACCommand alloc] initWithSignalBlock:^RACSignal *(id input) { \
  return [RACSignal return:input];                                                               \
}];

#define RACReturnInputEnabledCommand(enabled) [[RACCommand alloc] initWithEnabled:enabled signalBlock:^RACSignal *(id input) { \
  return [RACSignal return:input];                                                                                             \
}];