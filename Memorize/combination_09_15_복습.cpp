#pragma region 복습 3for_combination_내림차순

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int main()
//{
//	int n = 5;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			for (int k = 0; k < j; k++)
//			{
//				cout << i << " " << j << " " << k << endl;
//			}
//		}
//	}
//	return 0;
//}

#pragma endregion

#pragma region 복습 3for_combination_오름차순

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int main()
//{
//	int n = 5;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				cout << i << " " << j << " " << k << endl;
//			}
//		}
//	}
//	return 0;
//}

#pragma endregion

#pragma region 복습 recursion_combination

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//int n = 5, k = 3;
//void print(vector<int>& b)
//{
//	for (int i : b) cout << i << " ";
//	cout << endl;
//}
//
//void combination(int start, vector<int>& b)
//{
//	if (b.size() == k)
//	{
//		print(b);
//		return;
//	}
//	for (int i = start + 1; i < n; i++)
//	{
//		b.push_back(i);
//		combination(i, b);
//		b.pop_back();
//	}
//}
//
//int main()
//{
//	vector<int> b;
//	combination(-1, b);
//	return 0;
//}

#pragma endregion