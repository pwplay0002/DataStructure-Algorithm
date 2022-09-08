#pragma region my solve

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define endl '\n'
//using namespace std;
//
//int n, c;
//vector<pair<int, int>> m;
//vector<pair<int, int>> v;
//
//bool comp(pair<int, int> a, pair<int, int> b)
//{
//	return a.second > b.second;
//}
//
//int findValue(int _value)
//{
//	for (int i = 0; i < m.size(); i++)
//	{
//		if (m[i].first == _value) return i;
//	}
//	return -1;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> c;
//	int temp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		int a = findValue(temp);
//		if (a != -1)
//		{
//			m[a].second++;
//		}
//		else // 0
//		{
//			m.push_back({ temp, 1 });
//		}
//	}
//	for (auto i : m)
//	{
//		v.push_back({ i.first, i.second });
//	}
//	stable_sort(v.begin(), v.end(), comp);
//	for (auto i : v)
//	{
//		for (int j = 0; j < i.second; j++)
//		{
//			cout << i.first << " ";
//		}
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//const ll INF = 1e18;
//int n, c, a[1004];
//vector<pair<int, int>> v;
//map<int, int> mp, mp_first;
//bool cmp(pair<int, int> a, pair<int, int> b) 
//{
//	if (a.first == b.first) 
//	{
//		return mp_first[a.second] < mp_first[b.second];
//	}
//	return a.first > b.first;
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> n >> c;
//	for (int i = 0; i < n; i++) 
//	{
//		cin >> a[i]; mp[a[i]]++;
//		if (mp_first[a[i]] == 0) mp_first[a[i]] = i + 1;
//	}
//	for (auto it : mp) 
//	{
//		v.push_back({ it.second, it.first });
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (auto i : v) 
//	{
//		for (int j = 0; j < i.first; j++) 
//		{
//			cout << i.second << " ";
//		}
//	}
//
//	return 0;
//}

#pragma endregion

#pragma region my solve2
// TODO : solve2
//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//#define endl '\n'
//using namespace std;
//
//int n, c;
//map<int, int> m;
////vector<pair<int, int>> m;
//vector<pair<int, int>> v;
//
//bool comp(pair<int, int> a, pair<int, int> b)
//{
//	return a.second > b.second;
//}
//
////int findValue(int _value)
////{
////	for (int i = 0; i < m.size(); i++)
////	{
////		if (m[i].first == _value) return i;
////	}
////	return -1;
////}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> c;
//	int temp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		//int a = findValue(temp);
//		m[temp]++;
//	}
//	for (auto i : m)
//	{
//		v.push_back({ i.first, i.second });
//	}
//	stable_sort(v.begin(), v.end(), comp);
//	for (auto i : v)
//	{
//		for (int j = 0; j < i.second; j++)
//		{
//			cout << i.first << " ";
//		}
//	}
//	return 0;
//}

#pragma endregion