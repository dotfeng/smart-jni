/*
 * Method.h
 *
 *  Created on: 2012-12-16
 *      Author: boyliang
 */

#ifndef METHOD_H_
#define METHOD_H_

#include <stddef.h>
#include "Class.h"

namespace smart_jni{

class Method{


private:
	static jmethodID s_Class_getDeclaredMethod_ID;
	static jmethodID s_Method_setAccessible_ID;
	static jmethodID s_Method_invoke_ID;
	static jmethodID s_Method_getName_ID;

	jobject mMethod;
	jclass mClass;
	Class** mParamsClass;
	int mParamsCount;

public:
	Method(const jclass claxx, const char* method_name, const int n, Class** params_class);

	/**
	 * 调用函数
	 */
	jobject invoke(jobject receiver, ...);

	/**
	 * 获取函数名
	 */
	const char* getName();

	/**
	 * 释构
	 */
	~Method();

};

}



#endif /* METHOD_H_ */
