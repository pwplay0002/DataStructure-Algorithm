#pragma region solve

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//int n, l, r;
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//int a[54][54];
//bool visited[54][54];
//int sum, cnt;
//vector<pair<int, int>> v;
//
//void dfs(int y, int x, vector<pair<int, int>>& v) 
//{
//	for (int i = 0; i < 4; i++) 
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (nx < 0 || nx >= n || ny < 0 || ny >= n || visited[ny][nx])continue;
//		if (abs(a[ny][nx] - a[y][x]) >= l && abs(a[ny][nx] - a[y][x]) <= r) 
//		{
//			visited[ny][nx] = 1;
//			v.push_back({ ny,nx });
//			sum += a[ny][nx];
//			dfs(ny, nx, v);
//		}
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> l >> r;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	while (true)
//	{
//		bool flag = 0;
//		fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (!visited[i][j])
//				{
//					v.clear();
//					visited[i][j] = 1;
//					v.push_back({ i, j });
//					sum = a[i][j];
//					dfs(i, j, v);
//					if (v.size() == 1)continue;
//					for (pair<int, int> b : v)
//					{
//						a[b.first][b.second] = sum / v.size();
//						flag = 1;
//					}
//				}
//			}
//		}
//		if (!flag) break;
//		cnt++;
//	}
//	cout << cnt;
//	return 0;
//}

#pragma endregion

#pragma region solve to my solve

#include <iostream>
#include <vector>
#define endl '\n'
using namespace std;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };
int n, l, r, sum, cnt;
int a[54][54];
bool visited[54][54];
vector<pair<int, int>> v;
void dfs(int y, int x, vector<pair<int, int>>& v)
{
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= n || visited[ny][nx])continue;
		if (abs(a[ny][nx] - a[y][x]) >= l && abs(a[ny][nx] - a[y][x]) <= r)
		{
			visited[ny][nx] = 1;
			v.push_back({ ny, nx });
			sum += a[ny][nx];
			dfs(ny, nx, v);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> l >> r;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	while (true)
	{
		bool flag = false;
		fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (!visited[i][j])
				{
					v.clear();
					visited[i][j] = 1;
					v.push_back({ i, j });
					sum = a[i][j];
					dfs(i, j, v);
					if (v.size() == 1) continue;
					for (pair<int, int > p : v)
					{
						a[p.first][p.second] = sum / v.size();
						flag = true;
					}
				}
			}
		}
		if (!flag) break;
		cnt++;
	}
	cout << cnt;
	return 0;
}

#pragma endregion