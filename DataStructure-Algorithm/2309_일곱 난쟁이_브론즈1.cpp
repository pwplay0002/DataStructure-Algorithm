#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;

vector<int> arr;

void print(vector<int> v)
{
	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int temp;
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	do
	{
		for (int i = 0; i < 7; i++)
		{
			sum += arr[i];
		}
		if (sum == 100)
		{
			sort(arr.begin(), arr.begin() + 7);
			print(arr);
			break;
		}
		else
		{
			sum = 0;
		}
	} while (next_permutation(arr.begin(), arr.end()));
	return 0;
}