#include <jni.h>

//
// Created by ASUS on 2021/11/27.
//


extern "C"
JNIEXPORT jstring JNICALL
Java_com_cam_ndkotlin_security_Temps_temp(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF("temp");
}