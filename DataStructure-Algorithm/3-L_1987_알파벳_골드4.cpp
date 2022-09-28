#pragma region my solve

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//int r, c, big, ret;
//char a[21][21];
//int visited[21][21];
//vector<char> v;
//
//bool canMove(char _c)
//{
//	for (char i : v)
//	{
//		if (i == _c) return false;
//	}
//	return true;
//}
//
//void dfs(int ny, int nx, int y, int x)
//{
//	if (visited[ny][nx]) return;
//	big = visited[ny][nx] = visited[y][x] + 1;
//	if (ret < big) ret = big;
//	for (int i = 0; i < 4; i++)
//	{
//		int _ny = ny + dy[i];
//		int _nx = nx + dx[i];
//		if (_ny < 0 || _nx < 0 || _ny >= r || _nx >= c || visited[_ny][_nx]) continue;
//		if (!canMove(a[_ny][_nx])) continue;
//		v.push_back(a[_ny][_nx]);
//		dfs(_ny, _nx, ny, nx);
//		visited[_ny][_nx] = 0;
//		v.pop_back();
//	}
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> r >> c;
//	for (int i = 0; i < r; i++)
//	{
//		cin >> a[i];
//	}
//
//	v.push_back(a[0][0]);
//	dfs(0, 0, 0, 0);
//
//	cout << ret << endl;
//
//	return 0;
//}

#pragma endregion

#pragma region my solve

//#include <iostream>
//using namespace std;
//
//int R, C, ret, ny, nx, visited[30];
//char a[21][21];
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//
//void go(int y, int x, int cnt)
//{
//    ret = max(ret, cnt);
//    for (int i = 0; i < 4; i++)
//    {
//        ny = y + dy[i], nx = x + dx[i];
//        if (ny < 0 || ny >= R || nx < 0 || nx >= C)continue;
//        int next = (int)(a[ny][nx] - 'A');
//
//        if (visited[next] == 0)
//        {
//            visited[next] = 1;
//            go(ny, nx, cnt + 1);
//            visited[next] = 0;
//        }
//    }
//    return;
//}
//
//int main() 
//{
//    cin >> R >> C;
//    for (int i = 0; i < R; i++) 
//    {
//        for (int j = 0; j < C; j++) 
//        {
//            cin >> a[i][j];
//        }
//    }
//    visited[(int)a[0][0] - 'A'] = 1;
//    go(0, 0, 1);
//    cout << ret << '\n';
//    return 0;
//}

#pragma endregion