#pragma region Permutation

#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;
vector<int> v;

void print(vector<int>& _v)
{
	for (int i : _v)
		cout << i << ' ';
	cout << endl;
}

int main()
{
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	do
	{
		print(v);
	} while (next_permutation(v.begin(), v.end()));
	return 0;
}

#pragma endregion