//
// Created by Dell on 2016/10/8 0008.
//

#include "com_lzq_ndktest_Load.h"

JNIEXPORT jint JNICALL Java_com_lzq_ndktest_Load_addInt
  (JNIEnv *env, jobject obj, jint a, jint b){
  return a + b;
  };

