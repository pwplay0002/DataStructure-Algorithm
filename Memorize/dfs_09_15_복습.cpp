#pragma region dfs_º¹½À

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//int n, m, cnt;
//int a[104][104];
//bool visited[104][104];
//
//void dfs(int x, int y)
//{
//	if (visited[x][y]) return;
//	visited[x][y] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
//		if (!visited[nx][ny] && a[nx][ny] == 1) dfs(nx, ny);
//	}
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (!visited[i][j] && a[i][j] == 1)
//			{
//				cnt++;
//				dfs(i, j);
//			}
//		}
//	}
//	cout << cnt;
//	return 0;
//}

#pragma endregion