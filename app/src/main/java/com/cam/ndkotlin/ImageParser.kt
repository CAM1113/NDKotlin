package com.cam.ndkotlin

import java.lang.annotation.Native

class ImageParser {
    var name = "CAM"


    external fun parseImage(): String




    companion object {

        external fun staticFun():String

        init {
            System.loadLibrary("image_process")
        }
    }
}