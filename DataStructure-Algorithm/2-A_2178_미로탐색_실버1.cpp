#pragma region my solve

//#include <iostream>
//#include <tuple>
//#include <queue>
//#define endl '\n'
//using namespace std;
//
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//int a[104][104];
//int visited[104][104];
//int n, m, x, y;
//string temp;
//int ret = 1;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		for (int j = 0; j < temp.length(); j++)
//		{
//			if (temp[j] == '1')
//				a[i][j] = 1;
//			else if (temp[j] == '0')
//				a[i][j] = 0;
//		}
//	}
//
//	queue<pair<int, int>> q;
//	q.push({ x, y });
//	visited[0][0] = 1;
//	while (q.size())
//	{
//		tie(x, y) = q.front(); q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (nx < 0 || ny < 0 || nx >= n || ny >= m || a[nx][ny] == 0)continue;
//			if (visited[nx][ny]) continue;
//			visited[nx][ny] = visited[x][y] + 1;
//			q.push({ nx, ny });
//		}
//	}
//	cout << visited[n-1][m-1] << endl;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <cstdio>
//#include <tuple>
//#include <queue>
//#define endl '\n'
//using namespace std;
//
//const int max_n = 104;
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { -1, 0, 1, 0 };
//int a[max_n][max_n];
//int visited[max_n][max_n];
//int n, m, x, y;
//int main()
//{
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%1d", &a[i][j]);
//		}
//	}
//	queue<pair<int, int>> q;
//	visited[0][0] = 1;
//	q.push({ 0, 0 });
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
//	printf("%d", visited[n - 1][m - 1]);
//	return 0;
//}

#pragma endregion