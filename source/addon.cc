#include "mouse.h"

using namespace v8;

void Initialize(Local<Object> exports) { Mouse::Initialize(exports); }

NODE_MODULE(addon, Initialize)
