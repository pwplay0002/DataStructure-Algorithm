#pragma region solve

// d일안에 강연을 하면 p강연료를 지불
// d를 기준으로 오름차순 정렬을 
// 강연을 할 수 있는 날까지 우선순위 큐에 넣는다.
// 가장 비싼 강연료가 root에 있을 거고 root에 있는 강연료를 강연날에 넣어주고 
// 우선순위 큐에서 pop
// 이를 강연날만큼 반복?
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