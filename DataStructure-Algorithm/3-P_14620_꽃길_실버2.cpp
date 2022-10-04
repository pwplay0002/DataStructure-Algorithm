#pragma region my solve

//#include <iostream>
//#include <memory.h>
//#define endl '\n'
//using namespace std;
//
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//int a[104][104];
//int visited[104][104];
//int n, ret = 987654321, cost, tCost = 987654321;
//int f[3];
//pair<int, int> p[3];
//bool check = true;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	for(int i = 0; i < n * n; i++)
//	{
//		for(int j = i + 1; j < n * n; j++)
//		{
//			for(int k = j + 1; k < n * n; k++)
//			{
//				memset(visited, 0, sizeof(visited));
//				f[0] = i; f[1] = j; f[2] = k;
//				check = true;
//				for(int m = 0; m < 3; m++)
//				{
//					p[m].first = f[m] / n;
//					p[m].second = f[m] % n;
//					if (p[m].first < 1 || p[m].second < 1 || p[m].first >= n || p[m].second >= n) check = false;
//				}
//				for(int o = 0; o < 3; o++)
//				{
//					if (!check) break;
//					cost += a[p[o].first][p[o].second];
//					for(int l = 0; l < 4; l++)
//					{
//						int ny = p[o].first + dy[l];
//						int nx = p[o].second + dx[l];
//						if(ny < 0 || nx < 0 || ny >= n || nx >= n || visited[ny][nx])
//							check = false;
//						if (!check) break;
//						cost += a[ny][nx];
//						visited[ny][nx] = o + 1;
//						visited[p[o].first][p[o].second] = o + 1;
//					}
//				}
//				if (check) tCost = cost;
//				if (tCost < ret) 
//					ret = tCost;
//				cost = 0;
//			}
//		}
//	}
//	cout << ret;
//
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//using namespace std;
//int n, ret = 987654321, v[20][20], p[20][20];
//int dy[4] = { -1, 1, 0, 0 };
//int dx[4] = { 0, 0, -1, 1 };
//
//int setFlower(int y, int x)
//{
//	v[y][x] = 1;
//	int s = p[y][x];
//	for (int i = 0; i < 4; i++)
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		v[ny][nx] = 1;
//		s += p[ny][nx];
//	}
//	return s;
//}
//
//bool check(int y, int x)
//{
//	if (v[y][x]) return 0;
//	for (int i = 0; i < 4; i++)
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny < 0 || ny >= n || nx < 0 || nx >= n || v[ny][nx])
//			return 0;
//	}
//	return 1;
//}
//
//void eraseFlower(int y, int x)
//{
//	v[y][x] = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		v[ny][nx] = 0;
//	}
//}
//
//void flower(int cnt, int hap)
//{
//	if (cnt == 3)
//	{
//		ret = min(ret, hap);
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (check(i, j))
//			{
//				flower(cnt + 1, hap + setFlower(i, j));
//				eraseFlower(i, j);
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> p[i][j];
//		}
//	}
//	flower(0, 0);
//	cout << ret;
//}

#pragma endregion