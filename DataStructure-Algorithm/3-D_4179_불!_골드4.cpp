#pragma region my solve

// 지훈이는 bfs로 거리를 구한다.
// 불은 dfs로 계속해서 퍼지도록 만든다.
// 불이 있는곳은 못가며 지훈이가 미로를 탈출햇을 경우의 최단거리를 계속해서 구한 후 비교
#include <iostream>
#include <algorithm>
#include <tuple>
#include <queue>
#define endl '\n'
using namespace std;

const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };
int r, c;
string s;
char a[1004][1004];
int visited[1004][1004];
bool fvisited[1004][1004];
pair<int, int> Jpos, Fpos;
int x, y;
int x2, y2;

int find(int y, int x)
{
	int _min = -1;
	for (int i = 0; i < c; i++)
	{
		_min = min(_min, visited[0][i]);
		_min = min(_min, visited[r - 1][i]);
	}
	for (int i = 0; i < r; i++)
	{
		_min = min(_min, visited[i][0]);
		_min = min(_min, visited[i][c - 1]);
	}
	return _min;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		cin >> s;
		for (int j = 0; j < c; j++)
		{
			a[i][j] = s[j];
			if (s[j] == 'J')
			{
				Jpos.first = i;
				Jpos.second = j;
			}
			if (s[j] == 'F')
			{
				Fpos.first = i;
				Fpos.second = j;
			}
		}
	}

	// fire도 queue하나 만들어서 재귀처럼 돌려야 할듯
	queue<pair<int, int>> q;
	visited[Jpos.first][Jpos.second] = 1;
	visited[Fpos.first][Fpos.second] = 1;
	q.push({ Jpos.first, Jpos.second });
	//q.push({ Fpos.first, Fpos.second });
	while (q.size())
	{
		tie(y, x) = q.front(); q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= r || nx >= c || visited[ny][nx]) continue;
			if (a[ny][nx] == '#' || a[ny][nx] == 'F')continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny, nx });
		}

		y2 = Fpos.first; x2 = Fpos.second;
		for (int i = 0; i < 4; i++)
		{
			int ny = y2 + dy[i];
			int nx = x2 + dx[i];
			if (ny < 0 || nx < 0 || ny >= r || nx >= c || visited[ny][nx]) continue;
			if (a[ny][nx] == '#')continue;
			a[ny][nx] = 'F';
			q.push({ ny, nx });
		}
	}

	return 0;
}

#pragma endregion