#pragma region my solve

//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int n, ret;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	vector<pair<int, int>> v(n); // 데드라인, 컵라면 수
//	for(int i = 0; i < n; i++)
//	{
//		cin >> v[i].first >> v[i].second;
//	}
//	sort(v.begin(), v.end());
//	priority_queue<int, vector<int>, greater<int>> pq;
//	for(int i = 0; i < n; i++)
//	{
//		pq.push(v[i].second);
//		if (pq.size() > v[i].first) pq.pop();
//	}
//	while (pq.size())
//	{
//		ret += pq.top(); pq.pop();
//	}
//	cout << ret;
//	return 0;
//}

#pragma endregion