#pragma region my solve

//#include <iostream>
//#include <algorithm>
//#include <deque>
//#define endl '\n'
//
//using namespace std;
//
//deque<int> d;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int N, M, temp;
//	cin >> N >> M;
//	for(int i = 0; i < N; i++)
//	{
//		cin >> temp;
//		d.push_front(temp);
//	}
//	sort(d.begin(), d.end());
//
//	int ret = 0;
//	for(int i = 0; d.size() != 0;)
//	{
//		if (d.size() == 1) break;
//		if(M == (d[i] + d[d.size()-1]))
//		{
//			ret++;
//			d.pop_back();
//			d.pop_front();
//		}
//		else if(d[d.size() - 1] >= M)
//		{
//			d.pop_back();
//		}
//		else if(M < d[i] + d[d.size() - 1])
//		{
//			d.pop_back();
//		}
//		else if(M > d[i] + d[d.size() - 1])
//		{
//			d.pop_front();
//		}
//		else
//		{
//			d.pop_front();
//		}
//	}
//	cout << ret << endl;
//
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#define endl '\n'
//
//using namespace std;
//
//int n, m, a[15004], cnt;
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) cin >> a[i];
//	if (m > 200000) cout << 0 << endl;
//	else
//	{
//		for(int i = 0; i < n; i++)
//		{
//			for(int j = i + 1; j < n; j++)
//			{
//				if (a[i] + a[j] == m) cnt++;
//			}
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}

#pragma endregion