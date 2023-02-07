#pragma region my solve

//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <tuple>
//
//using namespace std;
//
//pair<char, int> p[200004]; // bracket, IsCorrect?
//stack<char> s;
//stack<int> last;
//int n, big; // last : last open bracket
//char temp;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		p[i].first = temp;
//	}
//
//	s.push(p[0].first);
//	if (s.top() == ')')
//	{
//		s.pop();
//		p[0].second = 0;
//	}
//	else last.push(0);
//	for(int i = 1; i < n; i++)
//	{
//		if(!s.empty() && s.top() == '(' && p[i].first == ')')
//		{
//			s.pop();
//			p[last.top()].second = 1;
//			p[i].second = 1;
//			last.pop();
//		}
//		else if(s.empty() && p[i].first == ')')
//		{
//			p[i].second = 0;
//		}
//		else if(p[i].first == '(')
//		{
//			s.push(p[i].first);
//			last.push(i);
//		}
//	}
//
//	int cnt = 0;
//	for(int i = 0; i < n; i++)
//	{
//		if(p[i].second == 1)
//		{
//			cnt++;
//		}
//		else
//		{
//			big = max(big, cnt);
//			cnt = 0;
//		}
//	}
//	big = max(big, cnt);
//	cout << big;
//	return 0;
//}

#pragma endregion

#pragma region solve 1

//#include <iostream>
//#include <stack>
//using namespace std;
//int n, d[200001], ret, cnt;
//string s;
//stack<int> stk;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> s;
//	for(int i = 0; i < n; i++)
//	{
//		if (s[i] == '(') stk.push(i);
//		else if(stk.size())
//		{
//			d[i] = d[stk.top()] = 1;
//			stk.pop();
//		}
//	}
//	for(int i = 0; i < n; i++)
//	{
//		if (d[i])
//		{
//			cnt++;
//			ret = max(ret, cnt);
//		}
//		else cnt = 0;
//	}
//	cout << ret;
//}

#pragma endregion

#pragma region sovle2

//#include <iostream>
//#include <stack>
//using namespace std;
//int n, ret;
//string str;
//stack<int> s;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	cin >> str;
//	s.push(-1);
//	for(int i = 0; i < n; i++)
//	{
//		if (str[i] == '(')s.push(i);
//		if(str[i] == ')')
//		{
//			s.pop();
//			if(!s.empty())
//			{
//				ret = max(ret, i - s.top());
//			}
//			else
//			{
//				s.push(i);
//			}
//		}
//	}
//	cout << ret;
//	return 0;
//}

#pragma endregion