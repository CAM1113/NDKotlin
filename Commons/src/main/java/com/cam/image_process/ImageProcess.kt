package com.cam.image_process

class ImageProcess {

    companion object{
        init {
            System.loadLibrary("image_process")
        }
    }

    external fun add(a:Int,b:Int):Int
}