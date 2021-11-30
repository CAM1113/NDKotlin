package com.cam.ndkotlin

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import com.cam.commons.logE
import com.cam.ndkotlin.security.SecurityUtils
import com.cam.ndkotlin.security.Temps
import kotlinx.android.synthetic.main.activity_main.*
import java.nio.charset.Charset
import java.security.MessageDigest

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val imageProcess = ImageProcess()
        tv.text = ImageParser().parseImage()

        logE("CAM")


    }


}