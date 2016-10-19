package com.lzq.ndktest;

/**
 * Created by Dell on 2016/10/8 0008.
 */
public class Load {

    static {
        System.loadLibrary("com_lzq_ndktest_Load");
    }

    public native int addInt(int a, int b);
}
