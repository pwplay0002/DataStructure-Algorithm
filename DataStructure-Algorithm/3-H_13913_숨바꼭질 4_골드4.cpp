#pragma region solve

//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//const int max_n = 200001;
//int visited[max_n], _prev[max_n];
//pair<int, int> d[3] = { {1, 1}, {1, -1}, {2, 0} };
//int n, k, ret, here, cnt, _next;
//vector<int> v;
//queue<int> q;
//int main() 
//{
//    cin >> n >> k;
//    visited[n] = 1;
//    q.push(n);
//    while (q.size()) 
//    {
//        here = q.front();
//        q.pop();
//        if (here == k) 
//        {
//            ret = visited[k];
//            break;
//        }
//        for (int i = 0; i < 3; i++) 
//        {
//            _next = here * d[i].first + d[i].second;
//            if (_next >= max_n || _next < 0 || visited[_next]) continue;
//            visited[_next] = visited[here] + 1;
//            _prev[_next] = here;
//            q.push(_next);
//        }
//    }
//    cout << ret - 1 << '\n';
//    for (int i = k; i != n; i = _prev[i]) 
//    {
//        v.push_back(i);
//    }
//    v.push_back(n);
//    reverse(v.begin(), v.end());
//    for (int i = 0; i < v.size(); i++) 
//    {
//        cout << v[i] << ' ';
//    }
//    return 0;
//}

#pragma endregion

#pragma region solve2

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define endl '\n'
using namespace std;
const int max_n = 200000;
vector<int> v;
queue<int> q;
int visited[max_n], _prev[max_n];
int n, k, here, ret;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> k;

	visited[n] = 1;
	q.push(n);
	while (q.size())
	{
		here = q.front(); q.pop();
		if(here == k)
		{
			ret = visited[here];
			break;
		}
		for(int next : {here + 1, here -1 , here * 2})
		{
			if (next >= max_n || next < 0 || visited[next]) continue;
			visited[next] = visited[here] + 1;
			_prev[next] = here;
			q.push(next);
		}
	}
	for(int i = k; i != n; i = _prev[i])
	{
		v.push_back(i);
	}
	v.push_back(n);
	cout << ret - 1 << endl;
	reverse(v.begin(), v.end());
	for (int i : v) cout << i << " ";
	return 0;
}

#pragma endregion