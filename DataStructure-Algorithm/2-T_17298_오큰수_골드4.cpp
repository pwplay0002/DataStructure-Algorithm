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

#pragma region solve

//#include <iostream>
//#include <stack>
//#define endl '\n'
//using namespace std;
//int ret[1000004];
//int a[1000004];
//stack<int> s;
//int n;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	fill(&ret[0], &ret[0] + 1000004, -1);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		while (s.size() && a[s.top()] < a[i])
//		{
//			ret[s.top()] = a[i]; s.pop();
//		}
//		s.push(i);
//	}
//	for (int i = 0; i < n; i++) cout << ret[i] << " ";
//}

#pragma endregion

#pragma region my solve from solve

//#include <iostream>
//#include <stack>
//using namespace std;
//
//int a[1000004];
//int ret[1000004];
//stack<int> s;
//int n;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	fill(&ret[0], &ret[0] + 1000004, -1);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		while (s.size() && a[s.top()] < a[i])
//		{
//			ret[s.top()] = a[i]; s.pop();
//		}
//		s.push(i);
//	}
//	for (int i = 0; i < n; i++) cout << ret[i] << " ";
//	return 0;
//}

#pragma endregion