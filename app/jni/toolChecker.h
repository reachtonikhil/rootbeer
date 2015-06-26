/****************************************************************************
 * File:   rootChecker.h
 * Author: Matthew Rollings
 * Date:   19/06/2015
 *
 * Description : Root checking JNI NDK code
 *
 ****************************************************************************/

extern "C" {

#include <jni.h>

int attachThreadToVM();

void detachThreadFromVM();

jstring Java_com_scottyab_rootchecker_RootCheckNative_getNDKVersionString( JNIEnv* env, jobject thiz );

jstring Java_com_scottyab_rootchecker_RootCheckNative_stringFromJNI( JNIEnv* env, jobject thiz );

int Java_com_scottyab_rootchecker_RootCheckNative_checkForRoot( JNIEnv* env, jobject thiz );

}