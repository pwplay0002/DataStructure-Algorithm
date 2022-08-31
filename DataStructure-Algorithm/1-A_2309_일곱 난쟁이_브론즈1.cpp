#pragma region my solve (next_permutation)

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define endl '\n'
//using namespace std;
//
//vector<int> arr;
//
//void print(vector<int> v)
//{
//	for (int i = 0; i < 7; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int temp;
//	int sum = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> temp;
//		arr.push_back(temp);
//	}
//	sort(arr.begin(), arr.end());
//	do
//	{
//		for (int i = 0; i < 7; i++)
//		{
//			sum += arr[i];
//		}
//		if (sum == 100)
//		{
//			sort(arr.begin(), arr.begin() + 7);
//			print(arr);
//			break;
//		}
//		else
//		{
//			sum = 0;
//		}
//	} while (next_permutation(arr.begin(), arr.end()));
//	return 0;
//}

#pragma endregion

#pragma region solve (combination_for)

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//int sum = 0;
//int a[9];
//vector<int> v;
//pair<int, int> ret;
//void solve()
//{
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (sum - a[i] - a[j] == 100)
//			{
//				ret = { i, j };
//				return;
//			}
//		}
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> a[i]; sum += a[i];
//	}
//	solve();
//	for (int i = 0; i < 9; i++)
//	{
//		if (ret.first == i || ret.second == i) continue;
//		v.push_back(a[i]);
//	}
//	sort(v.begin(), v.end());
//	for (int i : v) cout << i << endl;
//
//	return 0;
//}

#pragma endregion