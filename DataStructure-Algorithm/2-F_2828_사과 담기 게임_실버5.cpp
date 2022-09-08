#pragma region my solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int n, m, j;
//int a[24];
//int l, r, ret;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//
//	cin >> n >> m >> j;
//	for (int i = 0; i < j; i++)
//	{
//		cin >> a[i];
//	}
//	l = 1;
//	r = m;
//	for (int i = 0; i < j; i++)
//	{
//		while (1)
//		{
//			if (l <= a[i] && a[i] <= r)
//			{
//				break;
//			}
//			else if (l > a[i])
//			{
//				l--;
//				r--;
//				ret++;
//			}
//			else if (a[i] > m)
//			{
//				l++;
//				r++;
//				ret++;
//			}
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//using namespace std;
//int n, m, j, l, r, temp, ret;
//int main()
//{
//	cin >> n >> m >> j;
//	l = 1;
//	for (int i = 0; i < j; i++)
//	{
//		r = l + m - 1;
//		cin >> temp;
//		if (temp >= l && temp <= r) continue;
//		else
//		{
//			if (temp < l)
//			{
//				ret += (l - temp);
//				l = temp;
//			}
//			else
//			{
//				l += (temp - r);
//				ret += (temp - r);
//			}
//		}
//	}
//	cout << ret << "\n";
//	return 0;
//}

#pragma endregion