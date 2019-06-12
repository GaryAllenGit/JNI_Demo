#include <jni.h>             // JNI header provided by JDK
#include <stdio.h>           // C Standard IO Header
#include "HelloWorldJNI.h"   // Generated header file from the "javac -h" command

// Implementation of the native method sayHello()
JNIEXPORT void JNICALL Java_HelloWorldJNI_sayHello(JNIEnv *env, jobject thisObj) {
   printf("Hello World from some C code!\n");
   return;
}

