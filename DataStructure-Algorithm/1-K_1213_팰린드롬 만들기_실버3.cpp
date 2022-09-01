#pragma region my solve

#include <iostream>
#include <unordered_map>
#define endl '\n'
using namespace std;

unordered_map<char, int> a;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string name;
	int check = 0;
	cin >> name;
	for (int i = 0; i < name.size(); i++)
	{
		a[name[i]]++;
	}
	for (auto i : a)
	{
		if (i.second % 2 != 0)
		{
			check++;
		}
	}
	if (check >= 2)
		cout << "I'm Sorry Hansoo" << endl;
	else
	{

	}
	
	return 0;
}

#pragma endregion