#pragma region my solve

//#include <iostream>
//#include <unordered_map>
//#define endl '\n'
//
//using namespace std;
//string arr[31];
//int main()
//{
//	int test, n;
//	int cnt;
//	cin >> test;
//	for (int i = 0; i < test; i++)
//	{
//		cin >> n;
//		unordered_map<string, int> cloth;
//		for (int j = 0; j < n; j++)
//		{
//			string temp1;
//			string temp2;
//			cin >> temp1 >> temp2;
//			arr[j] = temp2;
//			cloth[temp2]++;
//		}
//
//		int temp = 1;
//		for (auto j : cloth)
//		{
//			temp *= j.second + 1;
//		}
//
//		cout << temp - 1 << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <map>
//#define endl '\n'
//using namespace std;
//int t, n;
//string a, b;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> t;
//	while (t--)
//	{
//		map<string, int> _map;
//		cin >> n;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a >> b;
//			_map[b]++;
//		}
//		long long ret = 1;
//		for (auto c : _map)
//		{
//			ret *= ((long long)c.second + 1);
//		}
//		ret--;
//		cout << ret << "\n";
//	}
//	return 0;
//}

#pragma endregion
