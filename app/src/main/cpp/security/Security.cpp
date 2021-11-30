//
// Created by ASUS on 2021/11/27.
//

#include <jni.h>
#include <string>

using namespace std;

extern "C"
JNIEXPORT jbyteArray JNICALL
Java_com_cam_ndkotlin_security_SecurityUtils_MD5(JNIEnv *env, jobject thiz, jstring input) {
    //调用java层的MD5加密方法
    //MessageDigest.getInstance("MD5").digest("CAM".toByteArray())

    jclass securityClazz = env->FindClass("java/security/MessageDigest");
    jmethodID methodId = env->GetStaticMethodID(securityClazz, "getInstance",
                                                "(Ljava/lang/String;)Ljava/security/MessageDigest;");
    jstring md5 = env->NewStringUTF("MD5");
    jobject messageDigestObj = env->CallStaticObjectMethod(securityClazz, methodId, md5);

    methodId = env->GetMethodID(env->GetObjectClass(input), "getBytes", "()[B");
    jobject inputs = env->CallObjectMethod(input, methodId);

    methodId = env->GetMethodID(securityClazz, "digest", "([B)[B");
    auto outputs = (jbyteArray) env->CallObjectMethod(messageDigestObj, methodId, inputs);
    return outputs;
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_cam_ndkotlin_security_SecurityUtils_00024Companion_getUUID(JNIEnv *env, jobject thiz) {
    // TODO: implement getUUID()
//    return UUID.randomUUID().toString()
    jclass clazz = env->FindClass("java/util/UUID");

    jmethodID methodId = env->GetStaticMethodID(clazz, "randomUUID", "()Ljava/util/UUID;");
    jobject uuid = env->CallStaticObjectMethod(clazz, methodId);

    methodId = env->GetMethodID(env->GetObjectClass(uuid), "toString", "()Ljava/lang/String;");
    return (jstring)env->CallObjectMethod(uuid, methodId);
}