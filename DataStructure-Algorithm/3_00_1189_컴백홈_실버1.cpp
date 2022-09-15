#include <iostream>
using namespace std;
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { -1, 0, 1, 0 };
int n, m, k, visited[10][10];
char a[10][10];
string s;
int go(int x, int y)
{
	if (x == 0 && y == m - 1)
	{
		if (k == visited[x][y]) return 1;
		return 0;
	}
	int ret = 0;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= m || visited[nx][ny] || a[nx][ny] == 'T') continue;
		visited[nx][ny] = visited[x][y] + 1;
		ret += go(nx, ny);
		visited[nx][ny] = 0;
	}
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			a[i][j] = s[j];
		}
	}
	visited[n - 1][0] = 1;
	cout << go(n - 1, 0) << "\n";
	
	return 0;
}