#pragma region my solve

//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <tuple>
//using namespace std;
//int n, s, e, cnt;
//vector<pair<int, int>> v;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> s >> e;
//		v.push_back({ e, s });
//	}
//	sort(v.begin(), v.end());
//	int time = 0;
//	for(int i = 0; i < v.size(); i++)
//	{
//		if (i == 0) { time = v[i].first; cnt++; }
//		else
//		{
//			if(time <= v[i].second)
//			{
//				time = v[i].first;
//				cnt++;
//			}
//		}
//	}
//	cout << cnt;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <algorithm>
//#include <tuple>
//#include <vector>
//using namespace std;
//int from, to, n, idx = 0, ret = 1;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cin >> n;
//    vector<pair<int, int>> v;
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> from >> to;
//        v.push_back({ to, from });
//    }
//    sort(v.begin(), v.end());
//    from = v[0].second;
//    to = v[0].first;
//    for (int i = 1; i < n; i++) 
//    {
//        if (v[i].second < to) continue;
//        from = v[i].second; to = v[i].first; ret++;
//    }
//    cout << ret << '\n';
//    return 0;
//}

#pragma endregion 