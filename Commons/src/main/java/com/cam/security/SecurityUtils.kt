package com.cam.security
import java.util.*


class SecurityUtils {

    companion object {
        init {
            System.loadLibrary("security")
        }
        external fun getUUID():String
    }

    external fun MD5(input: String): ByteArray
}