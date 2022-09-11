#pragma region my solve

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//int a[10][10];
//int a_temp[10][10];
//bool visited[10][10];
//bool v_visited[10][10];
//int n, m, ret;
//int safeCnt;
//vector<pair<int, int>> safe;
//
//void reset()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			a_temp[i][j] = a[i][j];
//			visited[i][j] = 0;
//			v_visited[i][j] = 0;
//		}
//	}
//	safeCnt = 0;
//}
//
//// 안전지대 개수 세는 함수
//void dfs_cnt(int x, int y)
//{
//	if (visited[x][y]) return;
//	visited[x][y] = 1;
//	safeCnt++;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;
//		if (!visited[nx][ny] && a_temp[nx][ny] == 0)
//		{
//			dfs_cnt(nx, ny);
//		}
//	}
//	return;
//}
//
//// 바이러스 퍼트리는 함수
//void dfs_virus(int x, int y)
//{
//	if (v_visited[x][y]) return;
//	v_visited[x][y] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;
//		if (!v_visited[nx][ny] && (a_temp[nx][ny] == 0 || a_temp[nx][ny] == 2))
//		{
//			a_temp[nx][ny] = 2;
//			dfs_virus(nx, ny);
//		}
//	}
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	int wallCnt = 3;
//	int _n, _k;
//	int b = 0;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j] == 0) safe.push_back({ i, j });
//		}
//	}
//	reset();
//	_n = safe.size();;
//	for (int i = 0; i < _n; i++)
//	{
//		for (int j = i + 1; j < _n; j++)
//		{
//			for (int k = j + 1; k < _n; k++)
//			{
//				// 여기서 i j k 는 조합으로 뽑은 번호이다.
//				// 이 번호 3개를 이용해서 벽을 세워야 한다.
//				a_temp[safe[i].first][safe[i].second] = 1;
//				a_temp[safe[j].first][safe[j].second] = 1;
//				a_temp[safe[k].first][safe[k].second] = 1;
//
//				for (int _i = 0; _i < n; _i++)
//				{
//					for (int _j = 0; _j < m; _j++)
//					{
//						if (!v_visited[_i][_j] && a_temp[_i][_j] == 2)
//						{
//							dfs_virus(_i, _j);
//						}
//					}
//				}
//
//				for (int _i = 0; _i < n; _i++)
//				{
//					for (int _j = 0; _j < m; _j++)
//					{
//						if (!visited[_i][_j] && a_temp[_i][_j] == 0)
//						{
//							dfs_cnt(_i, _j);
//						}
//					}
//				}
//				//cout << ret << endl;
//				ret = max(safeCnt, ret);
//				reset();
//			}
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <memory.h>
//#include <vector>
//#define endl '\n'
//using namespace std;
//int dx[4] = { 1, 0, -1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//int n, m, a[10][10];
//vector<pair<int, int>> v;
//
//bool vis[10][10];
//
//void dfs(int x, int y) {
//	if (a[x][y] == 1 || vis[x][y]) return;
//	vis[x][y] = 1;
//	for (int i = 0; i < 4; i++) {
//		if (x + dx[i] < 0 || y + dy[i] < 0 || x + dx[i] >= n || y + dy[i] >= m) {
//			continue;
//		}
//		dfs(x + dx[i], y + dy[i]);
//	}
//}
//
//int solve() {
//	memset(vis, 0, sizeof(vis));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (a[i][j] == 2) dfs(i, j);
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (!vis[i][j] && a[i][j] == 0) ans++;
//		}
//	}
//	return ans;
//}
//
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> a[i][j];
//			if (!a[i][j]) v.push_back({ i, j });
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = 0; j < i; j++) {
//			for (int k = 0; k < j; k++) {
//				a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 1;
//				ans = max(ans, solve());
//				a[v[i].first][v[i].second] = a[v[j].first][v[j].second] = a[v[k].first][v[k].second] = 0;
//			}
//		}
//	}
//	cout << ans;
//}

#pragma endregion