#pragma region my solve

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//int N, ret = 0, cnt = 0;
//int idx = -2;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N;
//	for(int i = 0; i < N; i++)
//	{
//		string s;
//		cin >> s;
//		if (!(s.length() & 1))
//		{
//			vector<char> v;
//			for (int j = 0; j < s.length(); j++)
//			{
//				v.push_back(s[j]);
//				idx++;
//				while (v.size() > 1 && idx != (v.size() - 1) && v[idx] == v[v.size() - 1])
//				{
//					v.pop_back();
//					v.pop_back();
//					idx -= 2;
//				}
//			}
//			if (v.size() == 0) ret++;
//			idx = -2;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <stack>
//#define endl '\n'
//using namespace std;
//int n, ret;
//string s;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> s;
//		stack<char> stk;
//		for (char a : s)
//		{
//			if (stk.size() && stk.top() == a)stk.pop();
//			else stk.push(a);
//		}
//		if (stk.size() == 0) ret++;
//	}
//	cout << ret << endl;
//}

#pragma endregion

#pragma region my solve2

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//int N, ret = 0, cnt = 0;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> N;
//	for(int i = 0; i < N; i++)
//	{
//		string s;
//		cin >> s;
//		if (!(s.length() & 1))
//		{
//			vector<char> v;
//			for(char i : s)
//			{
//				if (v.size() > 0 && i == v[v.size() - 1]) v.pop_back();
//				else v.push_back(i);
//			}
//
//			if (v.size() == 0) ret++;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

#pragma endregion