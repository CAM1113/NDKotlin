package com.cam.commons

import android.os.Build
import android.util.Log
import androidx.core.os.BuildCompat

inline fun <reified T> T.logE(info: String) {
    Log.e(T::class.java.name, info)
}


inline fun <reified T> T.logI(info: String) {
    Log.i(T::class.java.name, info)
}

inline fun <reified T> T.logV(info: String) {
    Log.v(T::class.java.name, info)
}

inline fun <reified T> T.logD(info: String) {
    Log.d(T::class.java.name, info)
}



class LogUtils {
    fun d(){
        if(BuildConfig.BUILD_TYPE == "debug"){}
    }
}