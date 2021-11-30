package com.cam.image_process

class ImageParser {
    var name = "CAM"
    external fun parseImage(): String

    companion object {
        init {
            System.loadLibrary("image_process")
        }
    }
}