#pragma region my solve

// 방법
// 1. 비트마스킹을 이용하여 모든 경우의 수를 구한다.
// 2. 그 경우의 수가 두 개의 구역으로 나뉘어 지는지 체크한다. -> 레드는 레드 끼리 모두 이어 지는지 체크
// 3. 나뉘어 지는 구역에 대한 인구 차이 값을 구한다.

//#include <iostream>
//#include <vector>
//#include <stack>
//#include <tuple>
//#include <algorithm>
//
//using namespace std;
//
//// 구역 번호는 vector index 순서로 하면 된다.
//int a[12];// 인구
//vector<int> adj[12]; // 지역
//int n, nodeCnt, temp, ret = 2100000000;
//vector<int> index;
//vector<int> color[2]; // red team : 0, blue team : 1
//
//bool canDivideTeam(vector<int>& _color, int team)
//{
//	if (_color.empty()) return false;
//	stack<int> st;
//	vector<int> v;
//	bool visited[12] = { 0, };
//	st.push(_color[0]);
//	v.push_back(_color[0]);
//	while (!st.empty())
//	{
//		int temp2 = st.top(); st.pop();
//		for(int i : adj[temp2])
//		{
//			if (visited[i] == 0 && find(color[team].begin(), color[team].end(), i) != color[team].end())
//			{
//				st.push(i);
//				v.push_back(i);
//			}
//			visited[i] = 1;
//		}
//	}
//	sort(v.begin(), v.end());
//	v.erase(unique(v.begin(), v.end()), v.end());
//	if (v == color[team])
//		return true;
//	return false;
//}
//
//void divideTeam(vector<int>& red, vector<int>& blue)
//{
//	for(int i = 0; i < (1<<n); i++)
//	{
//		red.clear();
//		blue.clear();
//		vector<int> vt;
//		for(int j = 1; j <= n; j++)
//		{
//			if (i & (1 << j))
//				vt.push_back(index[j]);
//		}
//		if(vt.empty()) continue;
//		for(int j : index)
//		{
//			// exist
//			if(find(vt.begin(), vt.end(), j) != vt.end())
//				red.push_back(j);
//			else
//				blue.push_back(j);
//		}
//		if (canDivideTeam(red, 0) && canDivideTeam(blue, 1))
//		{
//			int rsum = 0, bsum = 0;
//			for (int i : red) rsum += a[i];
//			for (int i : blue) bsum += a[i];
//			ret = min(abs(rsum - bsum), ret);
//		}
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie();
//
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		index.push_back(i);
//	}
//
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> nodeCnt;
//		for(int j = 1; j <= nodeCnt; j++)
//		{
//			cin >> temp;
//			adj[i].push_back(temp);
//			adj[temp].push_back(i);
//		}
//	}
//	divideTeam(color[0], color[1]);
//	if (ret == 2100000000) ret = -1;
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//#include <tuple>
//using namespace std;
//const int INF = 987654321;
//int n, a[11], m, temp, ret = INF, comp[11], visited[11];
//vector<int> adj[11];
//
//pair<int, int> dfs(int here, int value)
//{
//    visited[here] = 1;
//    pair<int, int> ret = { 1, a[here] };
//    for (int there : adj[here]) 
//    {
//        if (comp[there] != value) continue;
//        if (visited[there]) continue;
//        pair<int, int> _temp = dfs(there, value);
//        ret.first += _temp.first;
//        ret.second += _temp.second;
//    }
//    return ret;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false); cin.tie(NULL);
//    cin >> n;
//    for (int i = 1; i <= n; i++) 
//        cin >> a[i];
//
//    for (int i = 1; i <= n; i++) 
//    {
//        cin >> m;
//        for (int j = 0; j < m; j++) 
//        {
//            cin >> temp;
//            adj[i].push_back(temp);
//            adj[temp].push_back(i);
//        }
//    }
//
//    for (int i = 1; i < (1 << n) - 1; i++) 
//    {
//        fill(comp, comp + 11, 0);
//        fill(visited, visited + 11, 0);
//        int idx1 = -1, idx2 = -1;
//        for (int j = 0; j < n; j++) 
//        {
//            if (i & (1 << j))
//            {
//	            comp[j + 1] = 1;
//            	idx1 = j + 1;
//            }
//            else idx2 = j + 1;
//        }
//        pair<int, int> comp1 = dfs(idx1, 1);
//        pair<int, int> comp2 = dfs(idx2, 0);
//        if (comp1.first + comp2.first == n) ret = min(ret, abs(comp1.second - comp2.second));
//    }
//    cout << (ret == INF ? -1 : ret) << "\n";
//}

#pragma endregion