#pragma region my wrong solve

//#include <iostream>
//#include <stack>
//#include <tuple>
//using namespace std;
//
//int n, temp, cnt;
//stack<pair<long, long>> s;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	cin >> temp;
//	s.push({ temp, 1 });
//	for(int i = 1; i < n; i++)
//	{
//		cin >> temp;
//		if(s.top().first < temp)
//		{
//			while (s.size() && s.top().first < temp)
//			{
//				cnt += s.top().second;
//				s.pop();
//			}
//			s.push({ temp, 1 });
//		}
//		else if(s.top().first == temp)
//		{
//			s.push({ temp, s.top().second + 1 });
//			cnt += s.top().second;
//		}
//		else if(s.top().first > temp)
//		{
//			s.push({temp, 1});
//			cnt += s.top().second;
//		}
//	}
//	cout << cnt;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <stack>
//using namespace std;
//typedef long long ll;
//ll n, ret, temp;
//stack<pair<ll, ll>> s;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) 
//	{
//		cin >> temp;
//		int cnt = 1;
//		while (s.size() && s.top().first <= temp) 
//		{
//			ret += s.top().second;
//			if (s.top().first == temp) 
//			{
//				cnt = s.top().second + 1;
//			}
//			else 
//			{
//				cnt = 1;
//			}
//			s.pop();
//		}
//		if (s.size()) ret++;
//		s.push({ temp, cnt });
//	}
//	cout << ret << '\n';
//	return 0;
//}

#pragma endregion