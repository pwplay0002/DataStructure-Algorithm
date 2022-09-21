#pragma region my solve

// bfs + ¿ÏÀüÅ½»ö
//#include <iostream>
//#include <tuple>
//#include <vector>
//#include <queue>
//#define endl '\n'
//using namespace std;
//
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//int h, w, x, y;
//string s[54];
//int a[54][54];
//int visited[54][54];
//
//int find()
//{
//	int big = -2100000000;
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			if (big < visited[i][j])
//			{
//				big = visited[i][j];
//			}
//		}
//	}
//	return big;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> h >> w;
//	for (int i = 0; i < h; i++)
//	{
//		cin >> s[i];
//	}
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			if (s[i][j] == 'W')
//				a[i][j] = 0;
//			else a[i][j] = 1; // L
//		}
//	}
//
//	int ret = -2100000000;
//	queue<pair<int, int>> q;
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			if (a[i][j] == 0) continue;
//			int x = i;
//			int y = j;
//			visited[x][y] = 1;
//			q.push({ x, y });
//			while (q.size())
//			{
//				tie(x, y) = q.front(); q.pop();
//				for (int k = 0; k < 4; k++)
//				{
//					int nx = y + dx[k];
//					int ny = x + dy[k];
//					if (nx < 0 || ny < 0 || nx >= w || ny >= h || a[ny][nx] == 0) continue;
//					if (visited[ny][nx]) continue;
//					visited[ny][nx] = visited[x][y] + 1;
//					q.push({ ny, nx });
//				}
//			}
//			ret = max(ret, find());
//			fill(visited[0], visited[0] + 54 * 54, 0);
//		}
//	}
//
//	cout << ret - 1;
//	return 0;
//}

#pragma endregion 

#pragma region my solve

//#include <iostream>
//#include <queue>
//#include <tuple>
//#include <memory.h>
//using namespace std;
//int n, m, mx, visited[54][54];
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//char a[54][54];
//void bfs(int y, int x) 
//{
//    memset(visited, 0, sizeof(visited));
//    visited[y][x] = 1;
//    queue<pair<int, int>> q;
//    q.push({ y, x });
//    while (q.size()) 
//    {
//        tie(y, x) = q.front(); q.pop();
//        for (int i = 0; i < 4; i++) 
//        {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
//            if (visited[ny][nx]) continue;
//            if (a[ny][nx] == 'W')continue;
//            visited[ny][nx] = visited[y][x] + 1;
//            q.push({ ny, nx });
//            mx = max(mx, visited[ny][nx]);
//        }
//    }
//    return;
//}
//int main() 
//{
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) 
//    {
//        for (int j = 0; j < m; j++) 
//        {
//            cin >> a[i][j];
//        }
//    }
//    for (int i = 0; i < n; i++) 
//    {
//        for (int j = 0; j < m; j++) 
//        {
//            if (a[i][j] == 'L') bfs(i, j);
//        }
//    }
//    cout << mx - 1 << "\n";
//}

#pragma endregion