#pragma region my solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//int t, m, n, k, x, y;
//int a[54][54];
//bool visited[54][54];
//
//void init()
//{
//	for(int i = 0; i < 54; i++)
//	{
//		for(int j = 0; j < 54; j++)
//		{
//			a[i][j] = 0;
//			visited[i][j] = 0;
//		}
//	}
//}
//
//void dfs(int x, int y)
//{
//	if (visited[x][y])return;
//	visited[x][y] = 1;
//	for(int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= m || ny >= n)continue;
//		if (a[nx][ny] == 1 && !visited[nx][ny]) dfs(nx, ny);
//	}
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> t;
//
//	for(int i = 0; i < t; i++)
//	{
//		int ret = 0;
//		cin >> m >> n >> k;
//		for(int j = 0; j < k; j++)
//		{
//			cin >> x >> y;
//			a[x][y] = 1;
//		}
//
//		for(int j = 0; j < m; j++)
//		{
//			for(int k = 0; k < n; k++)
//			{
//				if(a[j][k] == 1 && !visited[j][k])
//				{
//					ret++;
//					dfs(j, k);
//				}
//			}
//		}
//		cout << ret << endl;
//		init();
//	}
//	return 0;
//}

#pragma endregion