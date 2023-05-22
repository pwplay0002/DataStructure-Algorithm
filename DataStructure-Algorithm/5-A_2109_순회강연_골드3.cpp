#pragma region my solve

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int n, d, p, ret;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	vector<pair<int, int>> dp(n);
//
//	for (int i = 0; i < n; i++) cin >> dp[i].second >> dp[i].first;
//	sort(dp.begin(), dp.end());
//
//	priority_queue<int, vector<int>, greater<int>> pq;
//	for(int i = 0; i < n; i++)
//	{

//		pq.push(dp[i].second);
//		if(pq.size() > dp[i].first)
//		{
//			pq.pop();
//		}
//	}
//	while (!pq.empty())
//	{
//		ret += pq.top(); pq.pop();
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int n, d, p, ret;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	vector<pair<int, int>> dp(n);
//	
//	for (int i = 0; i < n; i++)cin >> dp[i].second >> dp[i].first;
//	sort(dp.begin(), dp.end());
//	
//	priority_queue<int, vector<int>, greater<int>> pq;
//	for (int i = 0; i < n; i++)
//	{
//		pq.push(dp[i].second);
//		if (pq.size() > dp[i].first)
//		{
//			pq.pop();
//		}
//	}
//	while (pq.size())
//	{
//		ret += pq.top(); pq.pop();
//	}
//	cout << ret << '\n';
//	return 0;
//}

#pragma endregion