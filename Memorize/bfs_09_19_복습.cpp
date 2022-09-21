#pragma region bfs_º¹½À

//#include <iostream>
//#include <tuple>
//#include <queue>
//#define endl '\n'
//using namespace std;
//
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//
//int n, m, sx, sy, cx, cy, x, y;
//int a[104][104];
//int visited[104][104];
//
//int main()
//{
//	cin >> n >> m;
//	cin >> sx >> sy;
//	cin >> cx >> cy;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	queue<pair<int, int>> q;
//	visited[sx][sy] = 1;
//	q.push({ sx, sy });
//	while (q.size())
//	{
//		tie(x, y) = q.front(); q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (nx < 0 || ny < 0 || nx >= n || ny >= m || a[nx][ny] == 0) continue;
//			if (visited[nx][ny]) continue;
//			visited[nx][ny] = visited[x][y] + 1;
//			q.push({ nx, ny });
//		}
//	}
//	cout << visited[cx][cy] << endl;
//	return 0;
//}

#pragma endregion