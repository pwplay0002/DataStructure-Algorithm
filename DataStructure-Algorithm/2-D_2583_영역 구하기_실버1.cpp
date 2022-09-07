#pragma region my solve

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define endl '\n'
//using namespace std;
//
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//int m, n, k, lx, ly, rx, ry;
//int a[104][104];
//bool visited[104][104];
//int width;
//int cnt;
//vector<int> v;
//void dfs(int x, int y)
//{
//	if (visited[x][y]) return;
//	visited[x][y] = 1;
//	width++;
//	for(int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
//		if (a[nx][ny] == 0 && !visited[nx][ny])
//		{
//			dfs(nx, ny);
//		}
//	}
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> m >> n >> k;
//	for(int i = 0 ; i < k; i++)
//	{
//		cin >> lx >> ly >> rx >> ry;
//		for(int j = lx; j < rx; j++)
//		{
//			for(int k = ly; k < ry; k++)
//			{
//				a[j][k] = 1;
//			}
//		}
//	}
//
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			if(a[i][j] == 0 && !visited[i][j])
//			{
//				cnt++;
//				dfs(i, j);
//				v.push_back(width);
//				width = 0;
//			}
//		}
//	}
//	if (cnt == 0) v.push_back(0);
//	cout << cnt << endl;
//	sort(v.begin(), v.end());
//	for (auto i : v)
//		cout << i << " ";
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//#define y1 aaaa 
//int a[104][104], m, n, k, x1, x2, y1, y2, visited[104][104];
//const int dy[4] = { -1, 0, 1, 0 };
//const int dx[4] = { 0, 1, 0, -1 };
//vector<int> ret;
//int dfs(int y, int x)
//{
//	visited[y][x] = 1;
//	int ret = 1;
//	for (int i = 0; i < 4; i++) 
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny < 0 || ny >= m || nx < 0 || nx >= n || visited[ny][nx] == 1) continue;
//		if (a[ny][nx] == 1) continue;
//		ret += dfs(ny, nx);
//	}
//	return ret;
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> m >> n >> k;
//	for (int i = 0; i < k; i++) 
//	{
//		cin >> x1 >> y1 >> x2 >> y2;
//		for (int x = x1; x < x2; x++) 
//		{
//			for (int y = y1; y < y2; y++) 
//			{
//				a[y][x] = 1;
//			}
//		}
//	}
//	for (int i = 0; i < m; i++) 
//	{
//		for (int j = 0; j < n; j++) 
//		{
//			if (a[i][j] != 1 & visited[i][j] == 0) 
//			{
//				ret.push_back(dfs(i, j));
//			}
//		}
//	}
//	sort(ret.begin(), ret.end());
//	cout << ret.size() << "\n";
//	for (int a : ret) cout << a << " ";
//	return 0;
//}


#pragma endregion