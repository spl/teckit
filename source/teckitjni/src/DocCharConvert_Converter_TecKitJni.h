/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class DocCharConvert_Converter_TecKitJni */

#ifndef _Included_DocCharConvert_Converter_TecKitJni
#define _Included_DocCharConvert_Converter_TecKitJni
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     DocCharConvert_Converter_TecKitJni
 * Method:    createConverter
 * Signature: (Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_DocCharConvert_Converter_TecKitJni_createConverter
  (JNIEnv *, jobject, jstring, jboolean);

/*
 * Class:     DocCharConvert_Converter_TecKitJni
 * Method:    convert
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_DocCharConvert_Converter_TecKitJni_convert
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     DocCharConvert_Converter_TecKitJni
 * Method:    flush
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_DocCharConvert_Converter_TecKitJni_flush
  (JNIEnv *, jobject);

/*
 * Class:     DocCharConvert_Converter_TecKitJni
 * Method:    destroyConverter
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_DocCharConvert_Converter_TecKitJni_destroyConverter
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif