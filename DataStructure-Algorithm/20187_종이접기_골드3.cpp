//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int k, h, x = 1, y = 1;
//string dir;
//char temp;
//int a[2004][2004];
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> k;
//	for(int i = 0; i < 2 * k; i++)
//	{
//		cin >> temp;
//		dir += temp;
//	}
//	cin >> a[0][0];
//	for(int i = 2 * k - 1; i >= 0; i--)
//	{
//		switch (dir[i])
//		{
//		case 'L' :
//			{
//				for(int i = 0; i < x; i++)
//				{
//					for(int j = 0; j < y; j++)
//					{
//						a[i][2 * y - 1 - j] = a[i][j] ^ 1;
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}