#include <iostream>

using namespace std;

int main()
{
	// 4278190080 ff000000
	// 4278782217 ff090909
	// 4278190080 ff000000
	cout << std::hex << 4278782217U << endl;
	cout << ((0xFF000000 & 4278782217U) >> 24) << endl;
	return 0;
}