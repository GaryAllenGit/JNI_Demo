#include <jni.h>
#include <stdio.h>
#include "CalculatorJNI.h"

JNIEXPORT jdouble JNICALL Java_CalculatorJNI_add
          (JNIEnv *env, jobject thisObj, jdouble n1, jdouble n2) {
   jdouble result;
   printf("C output. The numbers being added are %f and %f\n", n1, n2);
   result = ((jdouble)n1 + n2);
   return result;
}

JNIEXPORT jdouble JNICALL Java_CalculatorJNI_sub
          (JNIEnv *env, jobject thisObj, jdouble n1, jdouble n2) {
   jdouble result;
   printf("C output. The numbers being subtracted are %f and %f\n", n1, n2);
   result = ((jdouble)n1 - n2);
   return result;
}

JNIEXPORT jdouble JNICALL Java_CalculatorJNI_mult
          (JNIEnv *env, jobject thisObj, jdouble n1, jdouble n2) {
   jdouble result;
   printf("C output. The numbers being multiplied are %f and %f\n", n1, n2);
   result = ((jdouble)n1 * n2);
   return result;
}

JNIEXPORT jdouble JNICALL Java_CalculatorJNI_div
          (JNIEnv *env, jobject thisObj, jdouble n1, jdouble n2) {
   jdouble result;
   printf("C output. The numbers being divided are %f and %f\n", n1, n2);
   result = ((jdouble)n1 / n2);
   return result;
}
