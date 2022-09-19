#pragma region my solve

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//int n, m;
//int a[54][54];
//int alen[54][54];
//vector<pair<int, int>> cpos;
//vector<pair<int, int>> ccpos;
//vector<vector<int>> com;
//int c; // 입력들어온 치킨 집 개수
//int len = 987654321;
//int ret = 987654321;
//int sum = 0;
//
//void changeMap(int index)
//{
//	fill(alen[0], alen[0] + 54, 0);
//	ccpos.clear();
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] == 1)
//				alen[i][j] = 1;
//		}
//	}
//	for (int k = 0; k < com[index].size(); k++)
//	{
//		alen[cpos[com[index][k]].first][cpos[com[index][k]].second] = 2;
//		ccpos.push_back({ cpos[com[index][k]].first, cpos[com[index][k]].second });
//	}
//}
//
//void combination(int start, vector<int>& v)
//{
//	if (v.size() == m)
//	{
//		com.push_back(v);
//		return;
//	}
//
//	for (int i = start + 1; i < c; i++)
//	{
//		v.push_back(i);
//		combination(i, v);
//		v.pop_back();
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//			alen[i][j] = a[i][j];
//			if (a[i][j] == 2)
//			{
//				cpos.push_back({ i, j });
//				c++;
//			}
//		}
//	}
//	vector<int> v;
//	combination(-1, v);
//	sum = 0;
//	for (int k = 0; k < com.size(); k++)
//	{
//		changeMap(k);
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (a[i][j] == 1)
//				{
//					for (int l = 0; l < ccpos.size(); l++)
//					{
//						len = min(len, (abs(ccpos[l].first - i)) + abs(ccpos[l].second - j));
//					}
//					sum += len;
//				}
//				len = 987654321;
//			}
//		}
//		ret = min(sum, ret);
//		sum = 0;
//	}
//	
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//int n, m, a[54][54], result = 987654321;
//vector<vector<int>>chickenList;
//vector<pair<int, int>> _home, chicken;
//void combi(int start, vector<int> v)
//{
//	if (v.size() == m)
//	{
//		chickenList.push_back(v);
//		return;
//	}
//	for (int i = start + 1; i < chicken.size(); i++)
//	{
//		v.push_back(i);
//		combi(i, v);
//		v.pop_back();
//	}
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j] == 1) _home.push_back({ i, j });
//			if (a[i][j] == 2) chicken.push_back({ i, j });
//		}
//	}
//	vector<int> v;
//	combi(-1, v);
//	for (vector<int> cList : chickenList)
//	{
//		int ret = 0;
//		for (pair<int, int> home : _home)
//		{
//			int _min = 987654321;
//			for (int ch : cList)
//			{
//				int _dist = abs(home.first - chicken[ch].first) + abs(home.second - chicken[ch].second);
//				_min = min(_min, _dist);
//			}
//			ret += _min;
//		}
//		result = min(result, ret);
//	}
//	cout << result << endl;
//	return 0;
//}

#pragma endregion