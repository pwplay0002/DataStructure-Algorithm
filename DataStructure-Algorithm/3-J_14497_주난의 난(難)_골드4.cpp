#pragma region solve

#include <iostream>
#include <algorithm>
#include <queue>
#define endl '\n'
using namespace std;
int n, m, x_1, y_1, x_2, y_2;
char a[304][304];
int visited[304][304];
const int dy[4] = { -1, 0, 1, 0 };
const int dx[4] = { 0, 1, 0, -1 };
queue<int> q;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	cin >> y_1 >> x_1 >> y_2 >> x_2;
	y_1--, x_1--, y_2--, x_2--;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	q.push(1000 * y_1 + x_1);
	visited[y_1][x_1] = 1;
	int cnt = 0;
	while (a[y_2][x_2] != '0')
	{
		cnt++;
		queue<int> temp;
		while (q.size())
		{
			int y = q.front() / 1000;
			int x = q.front() % 1000;
			q.pop();
			for (int i = 0; i < 4; i++)
			{
				int ny = y + dy[i];
				int nx = x + dx[i];
				if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx]) continue;
				visited[ny][nx] = cnt;
				if (a[ny][nx] != '0')
				{
					a[ny][nx] = '0';
					temp.push(1000 * ny + nx);
				}
				else q.push(1000 * ny + nx);
			}
		}
		q = temp;
	}
	cout << visited[y_2][x_2] << endl;

	return 0;
}

#pragma endregion