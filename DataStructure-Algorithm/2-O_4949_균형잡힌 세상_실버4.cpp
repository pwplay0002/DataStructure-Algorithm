#pragma region my solve

//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#define endl '\n'
//using namespace std;
//string str;
//vector<char> v;
//stack<char> s;
//bool end = false;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	
//	while (1)
//	{
//		while (!s.empty()) s.pop();
//		v.clear();
//		str.clear();
//		getline(cin, str);
//		if (str == ".") break;
//		for (int i = 0; i < str.size(); i++)
//		{
//			if (str[i] == '(') v.push_back('(');
//			if (str[i] == ')') v.push_back(')');
//			if (str[i] == '[') v.push_back('[');
//			if (str[i] == ']') v.push_back(']');
//		}
//		int sz = v.size();
//		if (v.size() == 0) { cout << "yes" << endl; continue; }
//		if (v[0] == ']' || v[0] == ')') { cout << "no" << endl; continue; }
//		s.push(v[0]);
//		for (int i = 1; i < sz; i++)
//		{
//			if (!s.empty() && s.top() == '(' && v[i] == ')')s.pop();
//			else if (!s.empty() && s.top() == '[' && v[i] == ']') s.pop();
//			else if (!s.empty() && s.top() == '(' && v[i] == ']') { break; }
//			else if (!s.empty() && s.top() == '[' && v[i] == ')') { break; }
//			else s.push(v[i]);
//		}
//		if (!s.empty()) cout << "no" << endl;
//		else cout << "yes" << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	while (true)
//	{
//		string s;
//		getline(cin, s);
//		if (s == ".") break;
//		stack<int> stk;
//		bool check = true;
//		for (int i = 0; i < s.length(); i++)
//		{
//			if (s[i] == ')')
//			{
//				if (stk.size() == 0 || stk.top() == '[')
//				{
//					check = false;
//					break;
//				}
//				else
//				{
//					stk.pop();
//				}
//			}
//			if (s[i] == ']')
//			{
//				if (stk.size() == 0 || stk.top() == '(')
//				{
//					check = false;
//					break;
//				}
//				else
//				{
//					stk.pop();
//				}
//			}
//			if (s[i] == '(') stk.push(s[i]);
//			if (s[i] == '[') stk.push(s[i]);
//		}
//		if (check && stk.size() == 0) cout << "yes" << endl;
//		else cout << "no" << endl;
//	}
//	return 0;
//}

#pragma endregion