// Tp.cpp: 定义应用程序的入口点。
//

#include "Tp.h"

using namespace std;

int main()
{
	char a[1];
	const char* str = "Hello CMake.";
	memcpy(a, str, 13);

	cout << "Hello CMake." << endl;
	return 0;
}
