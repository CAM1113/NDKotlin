package com.cam.ndkotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.cam.commons.logE
import com.cam.image_process.ImageParser
import com.cam.image_process.ImageProcess
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val imageProcess = ImageProcess()
        logE(imageProcess.add(1,2))
        tv.text = ImageParser().parseImage()

        logE("CAM")


    }


}