package com.cam.commons

import android.os.Build
import android.util.Log
import androidx.core.os.BuildCompat

inline fun <reified T,R> T.logE(info: R) {
    Log.e(T::class.java.name, info.toString())
}


inline fun <reified T> T.logI(info: R) {
    Log.i(T::class.java.name, info.toString())
}

inline fun <reified T> T.logV(info: R) {
    Log.v(T::class.java.name, info.toString())
}

inline fun <reified T> T.logD(info: R) {
    Log.d(T::class.java.name, info.toString())
}
