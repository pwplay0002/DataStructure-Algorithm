#pragma region my solve

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//// 1. 0 1 을 모든 경우의 수로 넣는다.
//int n, m, ret, big;
//char a[5][5];
//bool rc[5][5];
//bool visited[5][5];
//
//int calStr()
//{
//	string temp = "";
//	int sum = 0;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			if(visited[i][j] == 1)
//			{
//				temp += a[i][j];
//			}
//			else if(visited[i][j] == 0)
//			{
//				if (temp.size() != 0) sum += stoi(temp);
//				temp.clear();
//			}
//
//			if(j + 1 == m && temp.size() != 0)
//			{
//				sum += stoi(temp);
//			}
//		}
//		temp.clear();
//	}
//	temp.clear();
//	for (int j = 0; j < m; j++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (visited[i][j] == 0)
//			{
//				temp += a[i][j];
//			}
//			else if (visited[i][j] == 1)
//			{
//				if (temp.size() != 0) sum += stoi(temp);
//				temp.clear();
//			}
//
//			if (i + 1 == n && temp.size() != 0)
//			{
//				sum += stoi(temp);
//			}
//		}
//		temp.clear();
//	}
//	return sum;
//}
//
//void InitVisit(vector<int>& v)
//{
//	for(int i : v)
//	{
//		int row = i / m;
//		int col = i % m;
//		visited[row][col] = true;
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> m;
//	for(int i = 0; i < n; i++)
//	{
//		for(int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	vector<int> mv;
//	for(int i = 0; i < n*m; i++)
//	{
//		mv.push_back(i);
//	}
//	int cnt = n * m;
//	for(int i = 0; i < (1 << cnt); i++)
//	{
//		vector<int> vt;
//		for(int j = 0; j < cnt; j++)
//		{
//			if(i & (1 << j))
//			{
//				vt.push_back(mv[j]);
//			}
//		}
//		if(vt.size() == 0)
//		{
//			InitVisit(vt);
//			ret = max(ret, calStr());
//			fill(visited[0], visited[0] + 5 * 5, 0);
//		}
//		for(int j : vt)
//		{
//			// visited 배열에 0 또는 1로 초기화
//			InitVisit(vt);
//			ret = max(ret, calStr());
//			fill(visited[0], visited[0] + 5 * 5, 0);
//		}
//	}
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int a[4][4], n, m, ret;
//int main()
//{
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < n; i++) 
//    {
//        for (int j = 0; j < m; j++) 
//        {
//            scanf("%1d", &a[i][j]);
//        }
//    }
//    for (int s = 0; s < (1 << (n * m)); s++) 
//    {
//        int sum = 0;
//        for (int i = 0; i < n; i++)
//        {
//            int cur = 0;
//            for (int j = 0; j < m; j++) 
//            {
//                int k = i * m + j;
//                if ((s & (1 << k)) == 0) 
//                {
//                    cur = cur * 10 + a[i][j];
//                }
//                else 
//                {
//                    sum += cur;
//                    cur = 0;
//                }
//            }
//            sum += cur;
//        }
//        for (int j = 0; j < m; j++) 
//        {
//            int cur = 0;
//            for (int i = 0; i < n; i++) 
//            {
//                int k = i * m + j;
//                if ((s & (1 << k)) != 0) 
//                {
//                    cur = cur * 10 + a[i][j];
//                }
//                else 
//                {
//                    sum += cur;
//                    cur = 0;
//                }
//            }
//            sum += cur;
//        }
//        ret = max(ret, sum);
//    }
//    cout << ret << '\n';
//    return 0;
//}

#pragma endregion