#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define endl '\n'

using namespace std;

vector<int> graph[10002];
bool visited_DFS[1002];
bool visited_BFS[1002];

void DFS(int v)
{
	visited_DFS[v] = true;
	cout << v << ' ';

	for (int i = 0; i < graph[v].size(); i++)
	{
		int x = graph[v][i];
		if (!visited_DFS[x]) DFS(x);
	}
}

void BFS(int v)
{
	queue<int> q;
	q.push(v);
	visited_BFS[v] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << ' ';

		for (int i = 0; i < graph[x].size(); i++)
		{
			int y = graph[x][i];
			if (!visited_BFS[y])
			{
				q.push(y);
				visited_BFS[y] = true;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, M, V, a, b;
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 0; i < M; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}
	DFS(V);
	cout << endl;
	BFS(V);
	return 0;
}
