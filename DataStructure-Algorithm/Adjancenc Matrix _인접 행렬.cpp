#pragma region 인접행렬 ex1

//#include <iostream>
//
//#define endl '\n'
//#define INF 99999999
//
//using namespace std;
//
//int graph[3][3] =
//{
//	{0, 7, 5},
//	{7, 0, INF},
//	{5, INF, 0},
//};
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << graph[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region 인접행렬 양방향

//
//    0─────3
//    │ \
//    │  2
//    │ /
//    1 
//
//	  0 0 1 2 3
//    0 1 1 1 1 
//	  1 1 1 1 0
//	  2 1 1 1 0
//	  3 1 0 0 1
//
//	  0 0 1 2 3
//    0 0 1 1 1 
//	  1 1 0 1 0
//	  2 1 1 0 0
//	  3 1 0 0 0
//
// INPUT
// 4
// 3 1 2 3
// 2 0 2
// 2 0 1
// 1 0

//#include <iostream>
//using namespace std;
//
//int a[5][5];
//int vertexCnt; // vertex count
//int edgeCnt;
//int main()
//{
//	cin >> vertexCnt; // 4
//
//	for(int i = 0; i < vertexCnt; i++)
//	{
//		cin >> edgeCnt;
//		for(int j = 0; j < edgeCnt; j++)
//		{
//			int temp = 0;
//			cin >> temp;
//			a[i][temp] = 1;
//
//		}
//	}
//	for(int y = 0; y < vertexCnt; y++)
//	{
//		for(int x = 0; x < vertexCnt; x++)
//		{
//			cout << a[y][x] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

// result
// 0 1 1 1
// 1 0 1 0
// 1 1 0 0
// 1 0 0 0

#pragma endregion

#pragma region 인접행렬 기반 탐색

// 1
// 정점은 0번부터 9번까지 10개의 노드가 있다.
// 1-2 / 1-3 / 3-4 라는 경로가 있다.
// 이를 인접행렬로 표현
// 0 1 2 3 4 5 6 7 8 9
// 1 1 1 1 0 0 0 0 0 0
// 2 1 1 0 0 0 0 0 0 0
// 3 1 0 1 1 0 0 0 0 0
// 4 0 0 1 1 0 0 0 0 0
// 5 0 0 0 0 1 0 0 0 0
// 6 0 0 0 0 0 1 0 0 0
// 7 0 0 0 0 0 0 1 0 0
// 8 0 0 0 0 0 0 0 1 0
// 9 0 0 0 0 0 0 0 0 1

// 2
// 0번부터 방문안한 노드를 찾고 해당 노드부터 방문, 연결된 노드를 이어서
// 방문해서 출력하는 재귀함수를 만들고 싶다면?
// 또한, 정점을 방문하고 다시 방문하지 않게 만드려면?

// 1과 2 모두 충족하는 코드를 작성하라

#pragma region my solve

//#include <iostream>
//using namespace std;
//
//const int dy[4] = { -1,0,1,0 };
//const int dx[4] = { 0,1,0,-1 };
//int a[10][10];
//bool visited[10][10];
//
//void dfs(int y, int x)
//{
//	if (visited[y][x]) return;
//	visited[y][x] = 1;
//
//	for(int i = 0; i < 4; i++)
//	{
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny < 0 || nx < 0 || ny >= 10 || nx >= 10) continue;
//		if (!visited[ny][nx] && a[ny][nx] == 1)
//		{
//			cout << a[ny][nx] << " ny : " << ny << " nx : " << nx << endl;
//			dfs(ny, nx);
//		}
//	}
//	return;
//}
//
//int main()
//{
//	a[1][2] = 1; a[2][1] = 1;
//	a[1][3] = 1; a[3][1] = 1;
//	a[3][4] = 1; a[4][3] = 1;
//
//	for(int i = 0; i < 10; i++)
//		a[i][i] = 1;
//
//	for(int i = 0; i < 10; i++)
//	{
//		for(int j = 0; j < 10; j++)
//		{
//			if(visited[i][j] == 0 && a[i][j])
//			{
//				dfs(i, j);
//			}
//		}
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//using namespace std;
//
//const int V = 10;
//const int dy[4] = { -1,0,1,0 };
//const int dx[4] = { 0,1,0,-1 };
//bool a[V][V];
//bool visited[V];
//
//void go(int from)
//{
//	visited[from] = 1;
//	cout << from << endl;
//	for (int i = 0; i < V; i++)
//	{
//		if (visited[i]) continue;
//		if (a[from][i]) go(i);
//	}
//	return;
//}
//
//int main()
//{
//	a[1][2] = 1; a[2][1] = 1;
//	a[1][3] = 1; a[3][1] = 1;
//	a[3][4] = 1; a[4][3] = 1;
//
//	for (int i = 0; i < V; i++)
//	{
//		for (int j = 0; j < V; j++)
//		{
//			if (a[i][j] && visited[i] == 0)
//			{
//				go(i);
//			}
//		}
//	}
//	return 0;
//}

#pragma  endregion

#pragma endregion