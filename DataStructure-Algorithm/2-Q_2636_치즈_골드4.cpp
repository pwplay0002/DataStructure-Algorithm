#include <iostream>
#define endl '\n'
using namespace std;

int x, y;
int a[104][104];
bool visited[104][104];
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { -1, 0, 1, 0 };
// 1. 치즈안쪽에 구멍이 있는지 판별
// 2. 구멍이 있다면 바깥쪽과 연결되는지 판별
// 3. 바깥쪽과 연결되지 않는다면 연결 될때까지 안녹음.

void dfs(int x, int y)
{
	if (visited[x][y]) return;
	visited[x][y] = 1;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= x || ny >= y) continue;
		if (!visited[nx][ny] && a[nx][ny] == 0) dfs(nx, ny);
	}
	return;

}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> y >> x;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> a[x][y];
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if()
		}
	}
	return 0;
}