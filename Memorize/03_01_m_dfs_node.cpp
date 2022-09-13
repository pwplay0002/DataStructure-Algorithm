#include <iostream>
#include <vector>
using namespace std;
int visited[104];
vector<int> v[104];
int dfs(int here)
{
	int ret = 1;
	visited[here] = 1;
	for (int there : v[here])
	{
		if (visited[there]) continue;
		ret += dfs(there);
	}
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	v[1].push_back(2);
	v[1].push_back(3);
	cout << dfs(1) << endl;
	return 0;
}
// 3