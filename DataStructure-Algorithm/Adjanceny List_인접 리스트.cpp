//#include <iostream>
//#include <vector>
//#define endl '\n'
//
//using namespace std;
//
//vector <pair<int, int>> graph[3];
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	// 노드 0에 연결된 노드 정보 저장 {노드, 거리}
//	graph[0].push_back({ 1, 7 });
//	graph[0].push_back({ 2, 5 });
//
//	graph[1].push_back({ 0, 7 });
//
//	graph[2].push_back({ 0, 5 });
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < graph[i].size(); j++)
//		{
//			cout << '(' << graph[i][j].first << ',' << graph[i][j].second << ')' << endl;
//		}
//		cout << endl;
//	}
//	return 0;
//}

#pragma region 인접리스트 기반 탐색

// 1
// 정점은 0번 부터 9번까지 10개의 노드가 있다.
// 1-2 / 1-3 / 3-4 라는 경로가 있다.
// 1 --- 2
//   \
//    \
//     3 ---- 4
// 이를 인접리스트로 표현

// 2
// 0번부터 방문안한 노드를 찾고 해당 노드부터 방문, 연결된 노드를 이어서
// 방문해서 출력하는 재귀함수를 만들고 싶다면 어떻게 해야 할까?
// 또한 정점을 방문하고 다시 방문하지 않게 만들려면?

//#include <iostream>
//#include <vector>
//using namespace std;
//const int V = 10;
//vector<int> adj[V];
//int visited[V];
//
//void go(int idx)
//{
//	cout << idx << endl;
//	visited[idx] = 1;
//	for(int there : adj[idx])
//	{
//		if (visited[there]) continue;
//		go(there);
//	}
//	return;
//}
//
//int main()
//{
//	adj[1].push_back(2);
//	adj[2].push_back(1);
//
//	adj[1].push_back(3);
//	adj[3].push_back(1);
//
//	adj[3].push_back(4);
//	adj[4].push_back(3);
//	for(int i = 0; i < V; i++)
//	{
//		if (adj[i].size() && visited[i] == 0) go(i);
//	}
//	return 0;
//}

// result
// 1
// 2
// 3
// 4

#pragma endregion