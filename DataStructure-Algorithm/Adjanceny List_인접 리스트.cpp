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
//	// ��� 0�� ����� ��� ���� ���� {���, �Ÿ�}
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

#pragma region ��������Ʈ ��� Ž��

// 1
// ������ 0�� ���� 9������ 10���� ��尡 �ִ�.
// 1-2 / 1-3 / 3-4 ��� ��ΰ� �ִ�.
// 1 --- 2
//   \
//    \
//     3 ---- 4
// �̸� ��������Ʈ�� ǥ��

// 2
// 0������ �湮���� ��带 ã�� �ش� ������ �湮, ����� ��带 �̾
// �湮�ؼ� ����ϴ� ����Լ��� ����� �ʹٸ� ��� �ؾ� �ұ�?
// ���� ������ �湮�ϰ� �ٽ� �湮���� �ʰ� �������?

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