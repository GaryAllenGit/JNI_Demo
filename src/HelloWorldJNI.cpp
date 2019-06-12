#include <jni.h>             // JNI header provided by JDK
#include <iostream>          // C++ standard IO header
#include "HelloWorldJNI.h"   // Generated
using namespace std;

// Implementation of the native method sayHello()
JNIEXPORT void JNICALL Java_HelloWorldJNI_sayHello(JNIEnv *env, jobject thisObj) {
	cout << "Hello World from C++!" << endl;
   return;
}

