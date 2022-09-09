#pragma region my solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int cnt;
//int a[104][104];
//int h, w;
//char c;
//bool check = false;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> h >> w;
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			cin >> c;
//			if (c == 'c')
//			{
//				if (check)
//				{
//					cnt = 1;
//					a[i][j] = 0;
//				}
//				else
//				{
//					check = true;
//					cnt++;
//					a[i][j] = 0;
//				}
//			}
//			else if (check)
//			{
//				a[i][j] = cnt;
//				cnt++;
//			}
//			else
//			{
//				a[i][j] = -1;
//			}
//		}
//		check = false;
//		cnt = 0;
//	}
//	for (int i = 0; i < h; i++)
//	{
//		for (int j = 0; j < w; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int n, m, a[104][104];
//string s;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s;
//		for (int j = 0; j < m; j++)
//		{
//			if (s[j] == '.')a[i][j] = -1;
//			else a[i][j] = 0;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j] == 0)
//			{
//				int cnt = 1;
//				while (a[i][j + 1] == -1)
//				{
//					a[i][j + 1] = cnt++;
//					j++;
//				}
//			}
//		}
//	}
//	return 0;
//}

#pragma endregion