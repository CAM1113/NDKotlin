package com.cam.ndkotlin.security

import java.security.MessageDigest
import java.security.Security
import java.util.*


class SecurityUtils {

    companion object {
        init {
            System.loadLibrary("security")
        }

        external fun getUUID():String

    }
    fun temp(){
        UUID.randomUUID().toString()
    }



    external fun MD5(input: String): ByteArray
}