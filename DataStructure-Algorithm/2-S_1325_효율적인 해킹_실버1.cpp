#pragma region my solve

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#define endl '\n'
//using namespace std;
//vector<int> node[10004];
//vector<int> large;
//pair<int, int> childCnt[10004];
//bool visited[10004];
//int n, m, a, b;
//int big;
//
//int dfs(int there)
//{
//	int ret = 0;
//	if (visited[there]) return 0;
//	visited[there] = 1;
//
//	for (int here : node[there])
//	{
//		if (visited[here]) continue;
// 		ret += dfs(here);
//		visited[here] = 1;
//	}
//	return ret + 1;
//} 
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a >> b;
//		node[b].push_back(a);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		fill(&visited[0], &visited[0] + 10004, 0);
//		childCnt[i].first = i;
//		childCnt[i].second = dfs(i);
//		big = max(childCnt[i].second, big);
//	}
//	for (int i = 0; i <= n; i++)
//	{
//		if (childCnt[i].second >= big)
//			large.push_back(i);
//	}
//	sort(large.begin(), large.end());
//	for (int i : large)
//		cout << i << " ";
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//#include <memory.h>
//#define endl '\n'
//using namespace std;
//
//vector<int> v[10001];
//int dp[10001], mx, visited[10001], n, m, a, b;
//
//int dfs(int here)
//{
//	visited[here] = 1;
//	int ret = 1;
//	for (int there : v[here])
//	{
//		if (visited[there]) continue;
//		ret += dfs(there);
//	}
//	return ret;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> m;
//	while (m--)
//	{
//		cin >> a >> b;
//		v[b].push_back(a);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		memset(visited, 0, sizeof(visited));
//		dp[i] = dfs(i);
//		mx = max(dp[i], mx);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if((mx == dp[i]))
//			cout << i << " ";
//	}
//	return 0;
//}

#pragma endregion