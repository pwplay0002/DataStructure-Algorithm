#pragma region my solve - wrong answer

// 완전탐색으로 체크해봐야 할듯
// 그리드랑 좀 비슷한것같기도?
// 가장 큰 종이부터 붙일 수 있는지 체크해보자.
// 틀린 이유 왼쪽위부터 탐색하면 문제가 생긴다...
// 반례
//1 1 1 1 1 1 1 0 0 0
//1 1 1 1 1 1 1 0 0 0
//1 1 1 1 1 1 1 0 0 0
//1 1 1 1 1 1 1 0 0 0
//1 1 1 1 1 1 1 0 0 0
//1 1 1 1 1 0 0 0 0 0
//1 1 1 1 1 0 0 0 0 0
//1 1 1 1 1 0 0 0 0 0
//1 1 1 1 1 0 0 0 0 0
//0 0 0 0 0 0 0 0 0 0
// 답 5
//#include <iostream>
//#define endl '\n'
//
//using namespace std;
//int n, m, w, h, cnt;
//int _five, _four, _three, _two, _one;
//int a[10][10];
//bool check = true;
//bool gCheck = true;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	int one = 0;
//	// 5 x 5
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (i < 6 && j < 6)
//			{
//				for (int x = i; x < i + 5; x++)
//				{
//					for (int y = j; y < j + 5; y++)
//					{
//						if (a[x][y] == 1) { check = true; one++; }
//						else check = false;
//					}
//					if (!check) { one = 0; break; }
//				}
//
//				if (one == 25)
//				{
//					for (int x = i; x < i + 5; x++)
//					{
//						for (int y = j; y < j + 5; y++)
//							a[x][y] = 0;
//					}
//					cnt++;
//					_five++;
//				}
//				if (_five > 5) gCheck = false;
//				one = 0;
//			}
//		}
//	}
//	
//	// 4 x 4
//	for (int i = 0; i < 10; i++)
//	{
//		if (!gCheck) break;
//		for (int j = 0; j < 10; j++)
//		{
//			if (i < 7 && j < 7)
//			{
//				for (int x = i; x < i + 4; x++)
//				{
//					for (int y = j; y < j + 4; y++)
//					{
//						if (a[x][y] == 1) { check = true; one++; }
//						else check = false;
//					}
//					if (!check) { one = 0; break; }
//				}
//
//				if (one == 16)
//				{
//					for (int x = i; x < i + 4; x++)
//					{
//						for (int y = j; y < j + 4; y++)
//						{
//							a[x][y] = 0;
//						}
//					}
//					cnt++;
//					_four++;
//				}
//				if (_four > 5) gCheck = false;
//				one = 0;
//			}
//		}
//	}
//
//	// 3 x 3
//	for (int i = 0; i < 10; i++)
//	{
//		if (!gCheck) break;
//		for (int j = 0; j < 10; j++)
//		{
//			if (i < 8 && j < 8)
//			{
//				for (int x = i; x < i + 3; x++)
//				{
//					for (int y = j; y < j + 3; y++)
//					{
//						if (a[x][y] == 1) { check = true; one++; }
//						else check = false;
//					}
//					if (!check) { one = 0; break; }
//				}
//
//				if (one == 9)
//				{
//					for (int x = i; x < i + 3; x++)
//					{
//						for (int y = j; y < j + 3; y++)
//						{
//							a[x][y] = 0;
//						}
//					}
//					cnt++;
//					_three++;
//				}
//				if (_three > 5) gCheck = false;
//				one = 0;
//			}
//		}
//	}
//
//	// 2 x 2
//	for (int i = 0; i < 10; i++)
//	{
//		if (!gCheck) break;
//		for (int j = 0; j < 10; j++)
//		{
//			if (i < 9 && j < 9)
//			{
//				for (int x = i; x < i + 2; x++)
//				{
//					for (int y = j; y < j + 2; y++)
//					{
//						if (a[x][y] == 1) { check = true; one++; }
//						else check = false;
//					}
//					if (!check) { one = 0; break; }
//				}
//
//				if (one == 4)
//				{
//					for (int x = i; x < i + 2; x++)
//					{
//						for (int y = j; y < j + 2; y++)
//						{
//							a[x][y] = 0;
//						}
//					}
//					cnt++;
//					_two++;
//				}
//				if (_two > 5) gCheck = false;
//				one = 0;
//			}
//		}
//	}
//
//	// 1 x 1
//	for (int i = 0; i < 10; i++)
//	{
//		if (!gCheck) break;
//		for (int j = 0; j < 10; j++)
//		{
//			if (a[i][j] == 1)
//			{
//				a[i][j] == 0;
//				_one++;
//				cnt++;
//			}
//			if (_one > 5) gCheck = false;
//			one = 0;
//		}
//	}
//
//	if (!gCheck) cout << -1;
//	else cout << cnt;
//
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <map>
//using namespace std;
//
//void fast() 
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(NULL);
//    cout.tie(NULL);
//}
//
//const int INF = 987654321;
//int a[104][104], ret = INF, n = 10;
//map<int, int> mp;
//bool check(int y, int x, int cnt) 
//{
//    if (y + cnt > n || x + cnt > n) return false;
//    for (int i = y; i < y + cnt; i++) 
//    {
//        for (int j = x; j < x + cnt; j++)
//        {
//            if (a[i][j] == 0) return false;
//        }
//    }
//    return true;
//}
//void draw(int y, int x, int cnt, int value)
//{
//    for (int i = y; i < y + cnt; i++) 
//    {
//        for (int j = x; j < x + cnt; j++) 
//        {
//            a[i][j] = value;
//        }
//    }
//}
//void dfs(int y, int x, int cnt) 
//{
//    if (cnt >= ret) return;
//    if (x == n) 
//    {
//        dfs(y + 1, 0, cnt);
//        return;
//    }
//    if (y == n) 
//    {
//        ret = min(cnt, ret);
//        return;
//    }
//    if (a[y][x] == 0) 
//    {
//        dfs(y, x + 1, cnt); return;
//    }
//    for (int _size = 5; _size >= 1; _size--) 
//    {
//        if (mp[_size] == 5) continue;
//        if (check(y, x, _size)) 
//        {
//            mp[_size]++;
//            draw(y, x, _size, 0);
//            dfs(y, x + _size, cnt + 1);
//            draw(y, x, _size, 1);
//            mp[_size]--;
//        }
//    }
//    return;
//}
//int main() 
//{
//    fast();
//    for (int i = 0; i < n; i++) 
//    {
//        for (int j = 0; j < n; j++) 
//        {
//            cin >> a[i][j];
//        }
//    }
//    dfs(0, 0, 0);
//    cout << (ret == INF ? -1 : ret) << "\n";
//    return 0;
//}

#pragma endregion