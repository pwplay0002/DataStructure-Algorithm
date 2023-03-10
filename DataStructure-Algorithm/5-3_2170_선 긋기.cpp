#pragma region my solve

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n, from, to, l, r, ret;
//pair<int, int> a[1000004];
//pair<int, int> p;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> from >> to;
//		a[i] = { from, to };
//	}
//	sort(a, a + n);
//	l = a[0].first; r = a[0].second;
//	for (int i = 1; i < n; i++)
//	{
//		if (r < a[i].first)
//		{
//			ret += (r - l);
//			l = a[i].first;
//			r = a[i].second;
//		}
//		else if (a[i].first <= r && a[i].second >= r) r = a[i].second;
//	}
//	ret += r - l;
//	cout << ret;
//	return 0;
//}

#pragma endregion