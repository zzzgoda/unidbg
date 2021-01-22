/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_github_unidbg_arm_backend_hypervisor_Hypervisor */

#ifndef _Included_com_github_unidbg_arm_backend_hypervisor_Hypervisor
#define _Included_com_github_unidbg_arm_backend_hypervisor_Hypervisor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    setHypervisorCallback
 * Signature: (JLcom/github/unidbg/arm/backend/hypervisor/HypervisorCallback;)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_setHypervisorCallback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    nativeInitialize
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_nativeInitialize
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    nativeDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_nativeDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_unmap
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1unmap
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_map
 * Signature: (JJJI)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1map
  (JNIEnv *, jclass, jlong, jlong, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_protect
 * Signature: (JJJI)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1protect
  (JNIEnv *, jclass, jlong, jlong, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_write
 * Signature: (JIJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1write
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_sp64
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1sp64
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_tpidr_el0
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1tpidr_1el0
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_tpidrro_el0
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1tpidrro_1el0
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_nzcv
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1nzcv
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_cpacr_el1
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1cpacr_1el1
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_elr_el1
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1elr_1el1
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_vector
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1vector
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_vector
 * Signature: (JI[B)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1vector
  (JNIEnv *, jclass, jlong, jint, jbyteArray);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_write
 * Signature: (JJ[B)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1write
  (JNIEnv *, jclass, jlong, jlong, jbyteArray);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_read
 * Signature: (JJI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1read
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_sp64
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1sp64
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_pc64
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1pc64
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_nzcv
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1nzcv
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_cpacr_el1
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1cpacr_1el1
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    emu_start
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_emu_1start
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    emu_stop
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_emu_1stop
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
