#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> speak;
	std::make_heap(speak.begin(), speak.end());
	int count = 0;
	int first = 0;
	cin >> count;
	cin >> first;
	speak.push_back(first);
	cout << speak[0] << endl;
	for (int i = 1; i < count; i++)
	{
		int temp = 0;
		int half = 0;
		cin >> temp;
		speak.push_back(temp);
		std::sort(speak.begin(), speak.end());
		half = speak.size() / 2;
		if (speak.size() % 2 == 0)
		{
			cout << speak[half-1] << endl;
		}
		else
		{
			cout << speak[half] << endl;
		}
		
	}

	return 0;
}
