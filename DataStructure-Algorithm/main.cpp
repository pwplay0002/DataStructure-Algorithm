#include <iostream>
#include "hash_map.h"
#define endl '\n'
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	char ch[] = "hello";
	string str = "myString";
	hash_map<char> testChar;
	hash_map<char> testString;
	cout << testChar.hash(ch, 5) << endl;
	cout << testString.hash(str);
	return 0;
}

