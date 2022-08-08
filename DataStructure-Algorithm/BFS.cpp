//#include <iostream>
//#include <vector>
//#include <queue>
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
//void BFS(int start)
//{
//	queue<int> q;
//	q.push(start);
//	visited[start] = true;
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//		cout << x << ' ';
//
//		for (int i = 0; i < graph[x].size(); i++)
//		{
//			int y = graph[x][i];
//			if (!visited[y])
//			{
//				q.push(y);
//				visited[y] = true;
//			}
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	BFS(1);
//	return 0;
//}
