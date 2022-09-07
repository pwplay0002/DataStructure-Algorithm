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

#pragma region solve

//#include <iostream>
//using namespace std;
//int dy[4] = { -1, 0, 1, 0 };
//int dx[4] = { 0, 1, 0, -1 };
//int m, n, k, y, x, ret, ny, nx, t;
//int a[51][51];
//bool visited[51][51];
//void dfs(int y, int x) {
//    visited[y][x] = 1;
//    for (int i = 0; i < 4; i++) {
//        ny = y + dy[i];
//        nx = x + dx[i];
//        if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
//        if (a[ny][nx] == 1 && !visited[ny][nx]) {
//            dfs(ny, nx);
//        }
//    }
//    return;
//}
//
//int main() {
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> t;
//    while (t--) {
//        fill(&a[0][0], &a[0][0] + 51 * 51, 0);
//        fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
//        ret = 0;
//        cin >> m >> n >> k;
//        for (int i = 0; i < k; i++) {
//            cin >> x >> y;
//            a[y][x] = 1;
//        }
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                if (a[i][j] == 1 && !visited[i][j]) {
//                    dfs(i, j);
//                    ret++;
//                }
//            }
//        }
//        cout << ret << "\n";
//    }
//    return 0;
//}

#pragma endregion
