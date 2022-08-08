//#include <iostream>
//#include <vector>
//#define endl '\n'
//
//using namespace std;
//
//vector<int> graph[9] =
//{
//	{},
//	{2,3,8},
//	{1,7},
//	{1,4,5},
//	{3,5},
//	{3,4},
//	{7},
//	{2,6,8},
//	{1,7},
//};
//
//bool visited[9];
//
//void DFS(int v)
//{
//	visited[v] = true;
//	cout << v << ' ';
//	for (int i = 0; i < graph[v].size(); i++)
//	{
//		int x = graph[v][i];
//		if (!visited[x])
//		{
//			DFS(x);
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	DFS(1);
//	return 0;
//}
