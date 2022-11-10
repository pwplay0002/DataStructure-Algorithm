//#include <iostream>
//#include <string>
//using namespace std;
//
//int n, cnt, num, ret;
//char c[2000004];
//char temp;
//string s;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	cin >> c;
//
//	for(int i = 0; i < n; i++)
//	{
//		if (c[i] == 'f' && (c[i + 1] >= '0' && c[i + 1] <= '9'))
//		{
//			int ecnt = 2;
//			temp = c[i + 1];
//			num = temp - '0';
//			while (true)
//			{
//				if (c[i + ecnt] == 'e')
//				{
//					ret += ((ecnt - 2) * num);
//					i = i + ecnt;
//					break;
//				}
//				ecnt++;
//			}
//		}
//		else if (c[i] == 'i')
//		{
//			int icnt = 2;
//			temp = c[i + 1];
//			while (true)
//			{
//				if(c[i + icnt] == 'f' &&  (c[i + icnt + 1] >= '0' && c[i + icnt + 1] <= '9'))
//				{
//					while (true)
//					{
//						if()
//					}
//				}
//				if (c[i + icnt] == 'e')
//				{
//					ret++;
//					i += icnt;
//					break;
//				}
//				else
//				{
//					if(c[i + icnt] != temp)
//						ret++;
//
//					icnt++;
//				}
//			}
//		}
//		else
//			ret++;
//	}
//	cout << ret;
//
//	return 0;
//}