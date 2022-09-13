#pragma region my solve - fail 1_Time_Over

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int n, temp, j = 1;
//int a[1000000];
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		j = i + 1;
//		while (j != n)
//		{
//			if (a[i] < a[j])
//			{
//				cout << a[j] << " ";
//				break;
//			}
//			j++;
//		}
//		if (j == n) cout << -1 << " ";
//	}
//	return 0;
//}

#pragma endregion

#pragma region my solve2

#include <iostream>
#include <list>
#define endl '\n'
using namespace std;
list<int> lst[1000004];
bool dp[1000004];
int a[1000004];
int n;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	fill(&a[0], &a[0] + 100004, -1);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (i >= 1)
		{
			if (a[i - 1] < a[i]) dp[i - 1] = 0;
			else dp[i - 1] = 1;
		}
	}
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		j = i;
		while (j != n)
		{
			if (dp[j] == 0)
			{
				if (a[j + 1] > a[i])
				{
					cout << a[j + 1] << " ";
					break;
				}
			}
			j++;
		}
		if (j == n) cout << -1 << " ";
	}
	return 0;
}

#pragma endregion