#pragma region 01_01_Permutation

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> v;
//int main()
//{
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	do
//	{
//		for (int i : v) cout << i << " ";
//		cout << endl;
//	} while (next_permutation(v.begin(), v.end()));
//	return 0;
//}

#pragma endregion

#pragma region 01_01_Combination_3for_오름차순

//#include <iostream>
//using namespace std;
//
//int n = 5;
//int main()
//{
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = i + 1; j < n; j++)
//		{
//			for(int k = j + 1; k < n; k++)
//			{
//				cout << i << " " << j << " " << k << endl;
//			}
//		}
//	}
//	return 0;
//}

#pragma endregion

#pragma region 01_01_Combination_3for_내림차순

//#include <iostream>
//using namespace std;
//int n = 5;
//int main()
//{
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < i; j++)
//		{
//			for(int k = 0; k < j; k++)
//			{
//				cout << i << " " << j << " " << k << endl;
//			}
//		}
//	}
//	return 0;
//}

#pragma endregion

#pragma region 01_01_Combination_recursion_V_return

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int n = 5, r = 3;
//vector<vector<int>> v;
//void combination(int start, vector<int>& _v)
//{
//	if(_v.size() == r)
//	{
//		v.push_back(_v);
//		return;
//	}
//
//	for(int i = start + 1; i < n; i++)
//	{
//		_v.push_back(i);
//		combination(i, _v);
//		_v.pop_back();
//	}
//}
//
//int main()
//{
//	vector<int> vec;
//	combination(-1, vec);
//	for(vector<int> i : v)
//	{
//		for(int j : i)
//		{
//			cout << j << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region 01_01_DFS

//#include <iostream>
//using namespace std;
//
//const int dy[4] = { -1,0,1,0 };
//const int dx[4] = { 0,1,0,-1 };
//
//int a[104][104];
//bool visited[104][104];
//
//int n, m, ret;
//
//void dfs(int y, int x)
//{
//	if (visited[y][x]) return;
//	visited[y][x] = 1;
//
//	for(int i = 0 ; i < 4; i++)
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny < 0 || nx < 0 || ny >= 100 || nx >= 100) continue;
//		if (!visited[ny][nx] && a[ny][nx] == 1) dfs(ny, nx);
//	}
//	return;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 0 ; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if(!visited[i][j] && a[i][j] == 1)
//			{
//				ret++;
//				dfs(i, j);
//			}
//		}
//	}
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region 01_01_BFS

//#include <iostream>
//#include <tuple>
//#include <queue>
//
//using namespace std;
//const int dy[4] = { -1,0,1,0 };
//const int dx[4] = { 0,1,0,-1 };
//int a[104][104];
//int visited[104][104];
//int n, m, x, y, sx, sy, cx, cy;
//int main()
//{
//	cin >> m >> n; // 세로, 가로
//	cin >> sx >> sy;
//	cin >> cx >> cy;
//
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	queue<pair<int, int>> q;
//	q.push({ sy, sx });
//	visited[sy][sx] = 1;
//	while (q.size())
//	{
//		tie(y, x) = q.front(); q.pop();
//
//		for(int i = 0; i < 4; i++)
//		{
//			int ny = y + dy[i];
//			int nx = x + dx[i];
//			if(ny < 0 || nx < 0 || ny >= 100 || nx >= 100) continue;
//			if(visited[ny][nx] || a[ny][nx] == 0) continue;
//			visited[ny][nx] = visited[y][x] + 1;
//			q.push({ny, nx});
//		}
//	}
//	cout << visited[cy][cx];
//	return 0;
//}

#pragma endregion

#pragma region 01_01_Bitmasking_경우의 수

#include <iostream>
using namespace std;

const int n = 4;
string a[4] = { "a", "b", "c", "d" };
int main()
{
	for(int i = 0; i < (1<<n); i++)
	{
		string ret = "";
		for(int j = 0; j < n; j++)
		{
			if(i & (1 << j))
			{
				ret += (a[j] + " ");
			}
		}
		cout << ret << endl;
	}
	return 0;
}

#pragma endregion