#pragma region my solve

// Ʈ���� Ư¡�� ��� = ���� - 1
// dfs�� �ѹ��� ��� �������� �湮�� �� ���� ��
// �湮�� ��� ������ vcnt�� ��Ƶΰ� �ߺ��� ������ ��
// �� ������� last�� ���ؼ� ���� ������ graph�̴�. �ֳ��ϸ� 1���̻�
// dfs�� ������ �ϱ� �����̴�.
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int t, n, last, a, b;
//vector<int> adj[1004];
//int visited[1004];
//int edge;
//void dfs(int idx)
//{
//	visited[idx] = 1;
//	for(int there : adj[idx])
//	{
//		if(visited[there]) continue;
//		dfs(there);
//	}
//}
//
//int main()
//{
//	cin >> t;
//	
//	for(int i = 0; i < t; i++)
//	{
//		vector<int> vcnt;
//		int temp = 0;
//		bool check = true;
//		cin >> last;
//		cin >> n;
//		for(int j = 0; j < n; j++)
//		{
//			cin >> a >> b;
//			vcnt.push_back(a);
//			vcnt.push_back(b);
//			adj[a].push_back(b);
//			adj[b].push_back(a);
//		}
//		temp = a;
//		dfs(a);
//		if (n + 1 == last)
//		{
//			for (int i : vcnt)
//			{
//				if (visited[i] != 1)
//				{
//					check = false;
//					break;
//				}
//			}
//			sort(vcnt.begin(), vcnt.end());
//			vcnt.erase(unique(vcnt.begin(), vcnt.end()), vcnt.end());
//			if (vcnt.size() != last) check = false;
//		}
//		else check = false;
//		if (check) cout << "tree" << '\n';
//		else cout << "graph" << '\n';
//		edge = 0;
//		fill(visited, visited + 1004, 0);
//		for(int i = 0; i < 1004; i++) adj[i].clear();
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//using namespace std;
//int t, n, last, a, b;
//vector<int> adj[1004];
//bool visited[1004];
//void dfs(int idx)
//{
//	visited[idx] = 1;
//	for (int there : adj[idx])
//	{
//		if (visited[there]) continue;
//		dfs(there);
//	}
//}
//
//int main()
//{
//	cin >> t;
//
//	for (int i = 0; i < t; i++)
//	{
//		int cnt = 0;
//		cin >> last;
//		cin >> n;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a >> b;
//			adj[a].push_back(b);
//			adj[b].push_back(a);
//		}
//
//		for (int j = 1; j <= last; j++)
//		{
//			if (visited[j]) continue;
//			dfs(j);
//			cnt++;
//		}
//		if (cnt == 1 && n + 1 == last) cout << "tree" << '\n';
//		else cout << "graph" << '\n';
//		fill(visited, visited + 1004, 0);
//		for (int i = 0; i < 1004; i++) adj[i].clear();
//	}
//	return 0;
//}

#pragma endregion