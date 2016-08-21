//
// Created by Tiger on 2016/8/20.
//

#include <string.h>
#include <jni.h>

jstring Java_com_tiger_MainActivity_sayHello(JNIEnv *env, jobject jobj){

return (*env)->NewStringUTF(env,"Hello from JNI");

}

