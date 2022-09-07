#pragma region my solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int n, ret, big, rret, height;
//int a[104][104];
//bool visited[104][104];
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//void dfs(int x, int y)
//{
//	if (visited[x][y]) return;
//	visited[x][y] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
//		if (a[nx][ny] > height && !visited[nx][ny]) dfs(nx, ny);
//	}
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j] > big) big = a[i][j];
//		}
//	}
//
//	for (int k = 0; k < big; k++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] > k && !visited[i][j])
//				{
//					height = k;
//					dfs(i, j);
//					ret++;
//				}
//			}
//		}
//		if (rret < ret) { rret = ret; }
//		ret = 0;
//		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
//	}
//	
//	cout << rret << endl;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//int b[101][101], e[101][101], visited[101][101], n, temp, ret = 1;
//int dy[4] = { -1, 0, 1, 0 };
//int dx[4] = { 0, 1, 0, -1 };
//void dfs(int y, int x) 
//{
//    visited[y][x] = 1;
//    for (int i = 0; i < 4; i++) 
//    {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
//        if (!visited[ny][nx] && e[ny][nx] == 0) dfs(ny, nx);
//    }
//    return;
//}
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> n;
//    for (int i = 0; i < n; i++) 
//    {
//        for (int j = 0; j < n; j++) 
//        {
//            cin >> b[i][j];
//        }
//    }
//    for (int d = 1; d < 101; d++) 
//    {
//        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
//        temp = 0;
//        for (int i = 0; i < n; i++) 
//        {
//            for (int j = 0; j < n; j++) 
//            {
//                if (e[i][j] == 1) continue;
//                if (b[i][j] <= d) e[i][j] = 1;
//            }
//        }
//        for (int i = 0; i < n; i++) 
//        {
//            for (int j = 0; j < n; j++) 
//            {
//                if (e[i][j] == 0 && !visited[i][j]) 
//                {
//                    dfs(i, j);
//                    temp++;
//                }
//            }
//        }
//        ret = max(ret, temp);
//    }
//    cout << ret << '\n';
//    return 0;
//}

#pragma endregion