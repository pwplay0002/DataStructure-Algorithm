#pragma region my solve

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int n, curTime, ret;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	vector<pair<int, int>> cows(n);
//	for (int i = 0; i < n; i++)	cin >> cows[i].first >> cows[i].second;
//	sort(cows.begin(), cows.end());
//	for (auto i : cows)
//	{
//		if (curTime < i.first) { curTime = i.first; curTime += i.second; }
//		else curTime += i.second;
//	}
//	cout << curTime;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int n;
//int main() 
//{
//	cin >> n;
//	vector<pair<int, int>> a(n);
//	for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
//	sort(a.begin(), a.end());
//	int realTime = a[0].first + a[0].second;
//	for (int i = 1; i < a.size(); i++) \
//	{
//		realTime = max(realTime, a[i].first);
//		realTime += a[i].second;
//	}
//	cout << realTime << "\n";
//	return 0;
//}

#pragma endregion