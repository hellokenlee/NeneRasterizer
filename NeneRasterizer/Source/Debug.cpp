/*Copyright reserved by KenLee@2018 ken4000kl@gmail.com*/

#include "Debug.h"

#ifdef _WIN32
	#include <io.h>
#else
	#include <unistd.h>
#endif

using namespace std;

// 检查文件存在
void _dCheckFileExist(const char* fileName) {
#ifdef _WIN32
	if (_access(fileName, 0) == -1) {
		printf("[Error] File not exist! (%s)\n\n", fileName);
		exit(-1);
	}
#else
	if (access(fileName, F_OK)) {
		printf("[Error] File not exist! (%s)\n\n", fileName);
		exit(-1);
	}
#endif
}
