#include <jni.h>
#include "../commons/android_log.h"
#include "../commons/Commons.h"
using namespace std;


//JNIEXPORT 关键字表示该方法可以被外部调用
//jstring相当与java的String
//JNICALL 关键字代表此方法是JNI调用的，可以省略
//JNIEnv对象是java和C通信的桥梁，是JNI、NDK编程的重点，又熟悉其中的API
//jobject java中调用此方法的对象，如果是静态方法，此处会是jclass
extern "C"
JNIEXPORT jstring JNICALL
Java_com_cam_image_1process_ImageParser_parseImage(JNIEnv *env, jobject thiz) {
    // 伴生对象实质上是一个伴生类对象，所以接收的是一个jobject参数，而不是jclass
    jclass clazz = env->GetObjectClass(thiz);
    jmethodID mId = env->GetMethodID(env->GetObjectClass(clazz),"getName","()Ljava/lang/String;");
    auto className =(jstring) env->CallObjectMethod(clazz,mId);
    return className ;
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_cam_image_1process_ImageProcess_add(JNIEnv *env, jobject thiz, jint a, jint b) {
    return a+b;
}