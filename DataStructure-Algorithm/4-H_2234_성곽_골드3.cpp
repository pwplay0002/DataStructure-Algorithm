#pragma region my solve

//#include <iostream>
//using namespace std;
//
//const int dy[4] = { 0, -1, 0, 1 };
//const int dx[4] = { -1, 0, 1, 0 };
//int a[52][52];
//int b[52][52];
//bool visited[52][52];
//int n, m; // За ї­
//int one, two, three;
//
//void init_v()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			visited[i][j] = 0;
//		}
//	}
//}
//
//void init_a()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			a[i][j] = b[i][j];
//		}
//	}
//}
//
//int dfs(int y, int x)
//{
//	if (visited[y][x]) return 0;
//	visited[y][x] = true;
//	int s = 1;
//	for(int i = 0; i < 4; i++)
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny < 0 || nx < 0 || ny >= n || nx >= m || visited[ny][nx])continue;
//		if(a[y][x] & (1 << i)) continue;
//		s += dfs(ny, nx);
//	}
//	return s;
//}
//
//void eraseWall()
//{
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			for(int k = 0; k < 4; k++)
//			{
//				if (a[i][j] & (1 << k)) a[i][j] &= ~(1 << k);
//				else continue;
//				init_v();
//				if (!visited[i][j]) three = max(three, dfs(i, j));
//				init_v();
//				init_a();
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> m >> n;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//			b[i][j] = a[i][j];
//		}
//	}
//
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			if(!visited[i][j])
//			{
//				two = max(dfs(i, j), two);
//				one++;
//			}
//		}
//	}
//	eraseWall();
//	cout << one << '\n';
//	cout << two << '\n';
//	cout << three << '\n';
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//using namespace std;
//const int dy[] = { 0, -1, 0, 1 };
//const int dx[] = { -1, 0, 1, 0 };
//int visited[51][51], a[51][51], cnt, compSize[2504], n, m, mx, big;
//int dfs(int y, int x, int cnt)
//{
//	if (visited[y][x]) return 0;
//	visited[y][x] = cnt;
//	int ret = 1;
//	for(int i = 0; i < 4; i++)
//	{
//		if(!(a[y][x] & (1 << i)))
//		{
//			int ny = y + dy[i];
//			int nx = x + dx[i];
//			ret += dfs(ny, nx, cnt);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			if(!visited[i][j])
//			{
//				cnt++;
//				compSize[cnt] = dfs(i, j, cnt);
//				mx = max(mx, compSize[cnt]);
//			}
//		}
//	}
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			if(i + 1 < m)
//			{
//				int a = visited[i + 1][j];
//				int b = visited[i][j];
//				if(a != b)
//				{
//					big = max(big, compSize[a] + compSize[b]);
//				}
//			}
//			if(j + 1 < n)
//			{
//				int a = visited[i][j + 1];
//				int b = visited[i][j];
//				if (a != b)
//					big = max(big, compSize[a] + compSize[b]);
//			}
//		}
//	}
//	cout << cnt << '\n' << mx << '\n' << big << '\n';
//	return 0;
//}

#pragma endregion