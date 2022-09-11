#pragma region my solve with reference to the method

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int x, y, cnt, t = 0;
//int a[104][104];
//bool visited[104][104];
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//// 바깥부터 치즈를 녹이기 시작해야 한다. 가장 바깥은 0으로 정의되어 있기 때문에
//
//void initVisit()
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			visited[i][j] = 0;
//		}
//	}
//}
//int getchz()
//{
//	int c = 0;
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			if (a[i][j] == 1) c++;
//		}
//	}
//	return c;
//}
//void change2to0()
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			if (a[i][j] == 2) a[i][j] = 0;
//		}
//	}
//}
//
//void dfs(int _x, int _y)
//{
//	if (visited[_x][_y]) return;
//	visited[_x][_y] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = _x + dx[i];
//		int ny = _y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= x || ny >= y) continue;
//		if (!visited[nx][ny] && a[nx][ny] == 1)
//		{
//			a[nx][ny] = 2;
//		}
//		if (!visited[nx][ny] && a[nx][ny] == 0)
//		{
//			dfs(nx, ny);
//		}
//	}
//	return;
//
//}
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> x >> y;
//
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	if (getchz() == 0)
//	{
//		t = 0;
//		cnt = 0;
//	}
//	else
//	{
//		while (true)
//		{
//			if (getchz() == 0) break;
//			cnt = getchz();
//			dfs(0, 0);
//			for (int i = 0; i < x; i++)
//			{
//				if (!visited[i][0] && a[i][0] == 0)
//				{
//					
//				}
//				if (!visited[i][y - 1] && a[i][y - 1] == 0)
//				{
//					dfs(i, y - 1);
//				}
//			}
//			for (int i = 0; i < y; i++)
//			{
//				if (!visited[0][i] && a[0][i] == 0)
//				{
//					dfs(0, i);
//				}
//				if (!visited[x - 1][i] && a[x - 1][y] == 0)
//				{
//					dfs(x - 1, i);
//				}
//			}
//			t++;
//			change2to0();
//			initVisit();
//		}
//	}
//	std::cout << t << endl;
//	std::cout << cnt << endl;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int a[104][104], visited[104][104];
//int dy[] = { -1,0,1,0 };
//int dx[] = { 0,1,0,-1 };
//
//int n, m, cnt, cnt2;
//vector <pair<int, int>>v;
//
//void go(int y, int x)
//{
//	if (a[y][x] == 1)
//	{
//		v.push_back({ y,x });
//		return;
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx])continue;
//		visited[ny][nx] = 1;
//		go(ny, nx);
//	}
//	return;
//}
//
//int main()
//{
//	cnt = 0;
//	cnt2 = 0;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	while (true)
//	{
//		cnt2 = 0;
//		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
//		v.clear();
//
//		go(0, 0);
//		for (pair<int, int> b : v)
//		{
//			cnt2++;
//			a[b.first][b.second] = 0;
//		}
//
//		bool flag = 0;
//		for (int i = 0; i < n; i++) 
//		{
//			for (int j = 0; j < m; j++) 
//			{
//				if (a[i][j] != 0) flag = 1;
//			}
//		}
//		cnt++;
//		if (!flag) break;
//	}
//	cout << cnt << "\n";
//	cout << cnt2 << "\n";
//}


#pragma endregion

#pragma region my solve from solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int x, y, cnt, t = 0;
//int a[104][104];
//bool visited[104][104];
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//
//int getchz()
//{
//	int c = 0;
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			if (a[i][j] == 1) c++;
//		}
//	}
//	return c;
//}
//void change2to0()
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			if (a[i][j] == 2) a[i][j] = 0;
//		}
//	}
//}
//
//void dfs(int _x, int _y)
//{
//	if (visited[_x][_y]) return;
//	visited[_x][_y] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = _x + dx[i];
//		int ny = _y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= x || ny >= y) continue;
//		if (!visited[nx][ny] && a[nx][ny] == 1)
//		{
//			a[nx][ny] = 2;
//		}
//		if (!visited[nx][ny] && a[nx][ny] == 0)
//		{
//			dfs(nx, ny);
//		}
//	}
//	return;
//
//}
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> x >> y;
//
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	while (true)
//	{
//		if (getchz() == 0) break;
//		cnt = getchz();
//		dfs(0, 0);
//		t++;
//		change2to0();
//		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
//	}
//	std::cout << t << endl;
//	std::cout << cnt << endl;
//	return 0;
//}

#pragma endregion