#pragma region 2022_09_06_복습

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//int n = 5;
//int k = 3;
//
//void print(vector<int> v)
//{
//	for (int i : v) cout << i << " ";
//	cout << endl;
//}
//
//void combination(int start, vector<int> v)
//{
//	if (v.size() == k)
//	{
//		print(v);
//		return;
//	}
//	for (int i = start + 1; i < n; i++)
//	{
//		v.push_back(i);
//		combination(i, v);
//		v.pop_back();
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//
//	cout << "내림차순" << endl;
//	int n = 5;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			for (int k = 0; k < j; k++)
//			{
//				cout << i << " : " << j << " : " << k << endl;
//			}
//		}
//	}
//
//	cout << "오름차순" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				cout << i << " : " << j << " : " << k << endl;
//			}
//		}
//
//	}
//
//	cout << "recursion" << endl;
//	vector<int> v;
//
//	combination(-1, v);
//	return 0;
//}

#pragma endregion