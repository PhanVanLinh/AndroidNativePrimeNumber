#include <jni.h>
#include <string>
#include "PrimeNumber.h"

extern "C"
JNIEXPORT jstring JNICALL
Java_toong_vn_androidnativeprimenumber_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jboolean JNICALL
Java_toong_vn_androidnativeprimenumber_MainActivity_isPrimeNumber(JNIEnv *env, jobject, jint num) {
    PrimeNumber primeNumber(num);
    return (jboolean) primeNumber.isPrime();
}
