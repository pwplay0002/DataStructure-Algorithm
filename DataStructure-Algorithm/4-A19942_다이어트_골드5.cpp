#pragma region my solve
//
//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//int m[5];
//int n, mp, mf, ms, mv;
//int a[20][6];
//vector<int> ret;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	cin >> m[0] >> m[1] >> m[2] >> m[3];
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 0; j < 5; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	for(int i = 0; i < (1<<n); i++)
//	{
//		vector<int> v;
//		for(int j = 0; j < n; j++)
//		{
//			if(i & (1 << j))
//			{
//				v.push_back(j + 1);
//			}
//		}
//		if(!v.empty())
//		{
//			int temp[6] = { 0, };
//			for(int j : v)
//			{
//				for(int k = 0; k < 5; k++)
//				{
//					temp[k] += a[j][k];
//				}
//			}
//			if(temp[0] >= m[0] && temp[1] >= m[1] && temp[2] >= m[2] && temp[3] >= m[3])
//			{
//				if(ret.empty())
//				{
//					ret = v;
//					ret.push_back(temp[4]);
//				}
//				else
//				{
//					if(ret[ret.size() - 1] > temp[4])
//					{
//						ret.clear();
//						ret = v;
//						ret.push_back(temp[4]);
//					}
//					else if(ret[ret.size() - 1] == temp[4])
//					{
//						if(ret > v)
//						{
//							ret.clear();
//							ret = v;
//							ret.push_back(temp[4]);
//						}
//					}
//				}
//			}
//		}
//	}
//	if(ret.empty())
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	cout << ret[ret.size() - 1] << endl;
//	for(int i = 0; i < ret.size() - 1; i++)
//	{
//		cout << ret[i] << " ";
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//#include <map>
//#include <algorithm>
//
//using namespace std;
//typedef long long ll;
//const int INF = 987654321;
//int n, mp, mf, ms, mv;
//int b, c, d, e, ret = INF, sum;
//struct A {
//	int mp, mf, ms, mv, cost;
//}a[16];
//map<int, vector<vector<int>>> ret_v;
//int main()
//{
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	cin >> n;
//	cin >> mp >> mf >> ms >> mv;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i].mp >> a[i].mf >> a[i].ms >> a[i].mv >> a[i].cost;
//	}
//	for (int i = 1; i < (1 << n); i++) {
//		b = c = d = e = sum = 0;
//		vector<int> v;
//		for (int j = 0; j < n; j++) {
//			if (i & (1 << j)) {
//				v.push_back(j + 1);
//				b += a[j].mp;
//				c += a[j].mf;
//				d += a[j].ms;
//				e += a[j].mv;
//				sum += a[j].cost;
//			}
//		}
//		if (b >= mp && c >= mf && d >= ms && e >= mv) {
//			if (ret >= sum) {
//				ret = sum;
//				ret_v[ret].push_back(v);
//			}
//		}
//	}
//	if (ret == INF) cout << -1 << '\n';
//	else {
//		sort(ret_v[ret].begin(), ret_v[ret].end());
//		cout << ret << "\n";
//		for (int a : ret_v[ret][0]) 
//		{
//			cout << a << " ";
//		}
//	}
//	return 0;
//}

#pragma endregion