#pragma region 경우의 수

//#include <iostream>
//
//#include "Timer.h"
//
//using namespace std;
//const int n = 4;
//string a[4] = { "사과", "딸기", "포도", "배" };
//
//int main()
//{
//	Timer time;
//	time.Start();
//	for(int i = 0; i < (1<<n); i++)
//	{
//		string ret = "";
//		for(int j = 0; j < n; j++)
//		{
//			if(i & (1 << j))
//			{
//				ret += (a[j] + " ");
//			}
//		}
//		cout << ret << '\n';
//	}
//	time.End();
//
//	cout << time.GetDeltaTime() << '\n';
//	return 0;
//}

#pragma endregion

#pragma region practice 1

//#include <iostream>
//
//using namespace std;
//
//string a[4] = { "사과", "딸기", "포도", "배" };
//int main()
//{
//	for(int i = 0; i < (1<<4); i++)
//	{
//		string ret = "";
//		for(int j = 0; j < 4; j++)
//		{
//			if(i & (1 << j))
//			{
//				ret += (a[j] + " ");
//			}
//		}
//		cout << ret << '\n';
//	}
//	return 0;
//}

#pragma endregion

#pragma region practice 2

//#include <iostream>
//using namespace std;
//
//string s[4] = { "a", "b", "c", "d" };
//int main()
//{
//	for(int i = 0; i < (1<<4); i++)
//	{
//		string ret = "";
//		for(int j = 0; j < 4; j++)
//		{
//			if (i & (1 << j)) ret += (s[j] + " ");
//		}
//		cout << ret << '\n';
//	}
//	return 0;
//}

#pragma endregion