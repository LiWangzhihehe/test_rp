// Tp.cpp: 定义应用程序的入口点。
//

#include "Tp.h"

using namespace std;

int main()
{
	// delete a nullptr.
	int* p;
	// print p value.
	cout << "p value: " << p << endl;
	delete p;

	cout << "Hello CMake." << endl;
	return 0;
}
