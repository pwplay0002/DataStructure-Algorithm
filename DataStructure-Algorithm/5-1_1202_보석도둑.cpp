#pragma region my wrong solve

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <tuple>
//using namespace std;
//long long c, ret;
//int n, k, m, v, cnt; // 보석개수, 가방개수, 보석무게, 보석가격, 가방최대무게
//vector<pair<int, int>> vec; // 가격, 무게
//vector<int> bags;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> k;
//	cnt = k;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> m >> v;
//		vec.push_back({ v, m }); 
//	}
//	sort(vec.begin(), vec.end());
//	reverse(vec.begin(), vec.end());
//	for(int i = 0; i < k; i++)
//	{
//		cin >> c;
//		bags.push_back(c);
//	}
//	sort(bags.begin(), bags.end());
//	for(int i = 0; i < n; i++)
//	{
//		bool check = false;
//		for(int j = 0; j < bags.size(); j++)
//		{
//			if(vec[i].second <= bags[j] && cnt != 0)
//			{
//				cnt--;
//				ret += vec[i].first;
//				bags.erase(bags.begin() + j);
//				vec.erase(vec.begin() + i);
//				j--;
//				n--;
//				check = true;
//				break;
//			}
//		}
//		if (cnt == 0) break;
//		if (check == true) i--;
//	}
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region my solve 2

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;
typedef long long ll;
ll n, k, ret, temp1, temp;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	vector<pair<ll, ll>> v(n);
	vector<ll> vv(k);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	for (int i = 0; i < k; i++) cin >> vv[i];
	sort(v.begin(), v.end());
	sort(vv.begin(), vv.end());
	priority_queue<ll> pq;

	int j = 0;
	for (int i = 0; i < k; i++)
	{
		while (j < n && v[j].first <= vv[i]) pq.push(v[j++].second);
		if (pq.size()) 
		{
			ret += pq.top(); pq.pop();
		}
	}
	cout << ret << "\n";
	return 0;
}

#pragma endregion