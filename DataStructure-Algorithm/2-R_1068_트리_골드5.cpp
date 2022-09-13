#pragma region solve

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//int n, r, temp, root;
//vector<int> adj[54];
//
//int dfs(int here)
//{
//	int ret = 0;
//	int child = 0;
//	for (int there : adj[here])
//	{
//		if (there == r)continue;
//		ret += dfs(there);
//		child++;
//	}
//	if (child == 0) return 1;
//	return ret;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		if (temp == -1) root = 1;
//		else adj[temp].push_back(i);
//	}
//	cin >> r;
//	if (r == root)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	cout << dfs(root) << endl;
//	return 0;
//}

#pragma endregion

#pragma region my solve to solve

//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> node[54];
//int n, erase, temp, root;
//
//int dfs(int here)
//{
//	int ret = 0;
//	int child = 0;
//	for (int there : node[here])
//	{
//		if (there == erase) continue;
//		ret += dfs(there);
//		child++;
//	}
//	if (child == 0) return 1;
//	return ret;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		if (temp == -1) root = i;
//		else node[temp].push_back(i);
//	}
//	cin >> erase;
//	if (erase == root)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	cout << dfs(root) << endl;
//	return 0;
//}

#pragma endregion
