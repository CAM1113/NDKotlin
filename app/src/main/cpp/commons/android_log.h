//
// Created by ASUS on 2021/11/28.
//

#ifndef NDKOTLIN_ANDROID_LOG_H
#define NDKOTLIN_ANDROID_LOG_H

#include <android/log.h>

#define LOG_TAG "NDK_LOG"
#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)


#endif //NDKOTLIN_ANDROID_LOG_H
