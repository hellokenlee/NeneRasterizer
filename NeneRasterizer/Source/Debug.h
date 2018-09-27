/*Copyright reserved by KenLee@2018 ken4000kl@gmail.com*/
#ifndef DEBUG_H
#define DEBUG_H

#include <cstdio>
#include <string>

// 调试级别
#ifndef NNDEBUG
	#define NNDEBUG 1
#endif

// 连接字符串
#define CONNECTION(text1, text2) text1##text2
#define CONNECT(text1, text2) CONNECTION(text1, text2)

// 级别 1 Debug 函数
#if NNDEBUG < 1
	#define checkFileExist(filePath)
	#define dLog(fmt, ...)
	#define dLogIf(expr, fmt, ...)
	#define dCall(func)
	#define dCallOnce(func)
#else
	#define checkFileExist(filePath) _dCheckFileExist(filePath)
	#define dLog(fmt, ...) printf(fmt, ##__VA_ARGS__)
	#define dLogIf(expr, fmt, ...) if(expr) printf(fmt, ##__VA_ARGS__)
	#define dCall(func) func
	#define dCallOnce(func) static bool CONNECT(__static_call_flag, __LINE__) = (func, true)
#endif

// 级别 2 Debug 函数
#if NNDEBUG < 2
	#define ddLog(fmt, ...)
#else
	#define ddLog(fmt, ...) printf(fmt, ##__VA_ARGS__)
#endif


// 检查文件存在
void _dCheckFileExist(const char* filepath);

#endif // DEBUG_H