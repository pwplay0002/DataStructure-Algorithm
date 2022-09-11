#pragma region my solve

//#include <iostream>
//#include <stack>
//#define endl '\n'
//using namespace std;
//int t;
//string str;
//stack<char> s;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		while (!s.empty())
//		{
//			s.pop();
//		}
//		cin >> str;
//		if (str[0] == ')') { cout << "NO" << endl; continue; }
//		s.push(str[0]);
//		for (int j = 1; j < str.size(); j++)
//		{
//			if (!s.empty() && s.top() == '(' && str[j] == ')') s.pop();
//			else s.push(str[j]);
//		}
//		if (s.empty()) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <stack>
//using namespace std;
//int n;
//string s;
//bool check(string s) 
//{
//	stack<char> stk;
//	for (char c : s) 
//	{
//		if (c == '(')stk.push(c);
//		else {
//			if (!stk.empty()) stk.pop();
//			else return false;
//		}
//	}
//	return stk.empty();
//}
//int main() 
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) 
//	{
//		cin >> s;
//		if (check(s)) cout << "YES\n";
//		else cout << "NO\n";
//	}
//	return 0;
//}

#pragma endregion