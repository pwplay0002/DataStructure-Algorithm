#pragma region my solve

//#include <iostream>
//#include <algorithm>
//#include <tuple>
//#include <queue>
//#define endl '\n'
//using namespace std;
//
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//int r, c, ret;
//string s;
//char a[1004][1004];
//int visited[1004][1004];
//int fvisited[1004][1004];
//pair<int, int> Jpos;
//vector<pair<int, int>> Fpos;
//int x, y;
//int x2, y2;
//
//int find()
//{
//	bool impossible = true;
//	int _min = 987654321;
//	for (int i = 0; i < c; i++)
//	{
//		if (visited[0][i] == 0) continue;
//		_min = min(_min, visited[0][i]);
//		impossible = false;
//	}
//	for (int i = 0; i < c; i++)
//	{
//		if (visited[r - 1][i] == 0) continue;
//		_min = min(_min, visited[r - 1][i]);
//		impossible = false;
//	}
//	for (int i = 0; i < r; i++)
//	{
//		if (visited[i][0] == 0) continue;
//		_min = min(_min, visited[i][0]);
//		impossible = false;
//	}
//	for (int i = 0; i < r; i++)
//	{
//		if (visited[i][c - 1] == 0) continue;
//		_min = min(_min, visited[i][c - 1]);
//		impossible = false;
//	}
//	return _min;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> r >> c;
//	for (int i = 0; i < r; i++)
//	{
//		cin >> s;
//		for (int j = 0; j < c; j++)
//		{
//			a[i][j] = s[j];
//			if (s[j] == 'J')
//			{
//				Jpos.first = i;
//				Jpos.second = j;
//			}
//			if (s[j] == 'F')
//			{
//				Fpos.push_back({ i, j });
//			}
//		}
//	}
//
//	queue<pair<int, int>> q;
//	queue<pair<int, int>> q2;
//	visited[Jpos.first][Jpos.second] = 1;
//	for (auto i : Fpos)
//	{
//		fvisited[i.first][i.second] = 1;
//		q2.push({ i.first, i.second });
//	}
//	q.push({ Jpos.first, Jpos.second });
//	while (q2.size())
//	{
//		tie(y2, x2) = q2.front(); q2.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int ny = y2 + dy[i];
//			int nx = x2 + dx[i];
//			if (ny < 0 || nx < 0 || ny >= r || nx >= c || fvisited[ny][nx]) continue;
//			if (a[ny][nx] == '#')continue;
//			fvisited[ny][nx] = fvisited[y2][x2] + 1;
//			q2.push({ ny, nx });
//		}
//	}
//	while (q.size())
//	{
//		tie(y, x) = q.front(); q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int ny = y + dy[i];
//			int nx = x + dx[i];
//			if (ny < 0 || nx < 0 || ny >= r || nx >= c || visited[ny][nx]) continue;
//			if (a[ny][nx] == '#' || a[ny][nx] == 'F')continue;
//			if (fvisited[ny][nx] > (visited[y][x] + 1) || fvisited[ny][nx] == 0)
//			{
//				visited[ny][nx] = visited[y][x] + 1;
//				q.push({ ny, nx });
//			}
//		}
//	}
//	ret = find();
//	if (ret == 987654321) cout << "IMPOSSIBLE";
//	else cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <queue>
//#include <tuple>
//#define endl '\n'
//using namespace std;
//const int INF = 987654321;
//char a[1004][1004];
//int n, m, sx, sy, dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 }, ret, y, x;
//int fire_check[1004][1004], person_check[1004][1004];
//bool in(int a, int b) 
//{
//	return 0 <= a && a < n && 0 <= b && b < m;
//}
//int main() 
//{
//	cin.tie(0), cout.tie(0);
//	queue<pair<int, int>> q;
//	cin >> n >> m;
//	fill(&fire_check[0][0], &fire_check[0][0] + 1004 * 1004, INF);
//	for(int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j] == 'F')
//			{
//				fire_check[i][j] = 1;
//				q.push({ i,j });
//			}
//			if (a[i][j] == 'J')
//			{
//				sy = i;
//				sx = j;
//			}
//		}
//	}
//	while (q.size()) 
//	{
//		tie(y, x) = q.front();
//		q.pop();
//		for (int i = 0; i < 4; i++) 
//		{
//			int ny = y + dy[i];
//			int nx = x + dx[i];
//			if (!in(ny, nx)) continue;
//			if (fire_check[ny][nx] != INF || a[ny][nx] == '#') continue;
//			fire_check[ny][nx] = fire_check[y][x] + 1;
//			q.push({ ny, nx });
//		}
//	}
//	person_check[sy][sx] = 1;
//	q.push({ sy,sx });
//	while (q.size())
//	{
//		int y = q.front().first;
//		int x = q.front().second;
//		q.pop();
//		if (x == m - 1 || y == n - 1 || x == 0 || y == 0) 
//		{
//			ret = person_check[y][x];
//			break;
//		}
//		for (int i = 0; i < 4; i++) 
//		{
//			int ny = y + dy[i];
//			int nx = x + dx[i];
//			if (!in(ny, nx)) continue;
//			if (person_check[ny][nx] || a[ny][nx] == '#') continue;
//			if (fire_check[ny][nx] <= person_check[y][x] + 1) continue;
//			person_check[ny][nx] = person_check[y][x] + 1;
//			q.push({ ny, nx });
//		}
//	}
//	if (ret != 0) cout << ret << "\n";
//	else cout << "IMPOSSIBLE \n";
//	return 0;
//}

#pragma endregion