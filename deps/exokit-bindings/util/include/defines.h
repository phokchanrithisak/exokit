#ifndef _DEFINES_H_
#define _DEFINES_H_

#include <v8.h>
#include <nan/nan.h>

using namespace v8;

#define JS_STR(...) Nan::New<v8::String>(__VA_ARGS__).ToLocalChecked()
#define JS_INT(val) Nan::New<v8::Integer>(val)
#define JS_NUM(val) Nan::New<v8::Number>(val)
#define JS_FLOAT(val) Nan::New<v8::Number>(val)
#define JS_BOOL(val) Nan::New<v8::Boolean>(val)

template <typename T>
class shared_ptr_release_deleter {
public:
  void operator() (T *ptr) {
    // nothing
  }
private:
};

Local<Array> pointerToArray(void *ptr);
void *arrayToPointer(Local<Array> array);

#endif