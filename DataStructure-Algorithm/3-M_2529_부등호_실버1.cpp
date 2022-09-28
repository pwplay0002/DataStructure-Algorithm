#pragma region my solve

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//#include <cmath>
//#define endl '\n'
//using namespace std;
//
//long long b;
//char c;
//string s, s_ret_max, s_ret_min;
//int k;
//long long ret_min = 9876543210, ret_max;
//int num[] = { 0, 1, 2, 3, 4, 5, 6, 7 ,8, 9 };
//vector<int> v;
//
//bool check(int _k)
//{
//	for (int i = 0; i < _k; i++)
//	{
//		if (s[i] == '<')
//		{
//			if (!(num[i] < num[i + 1])) return false;
//		}
//		else if (s[i] == '>')
//		{
//			if (!(num[i] > num[i + 1])) return false;
//		}
//	}
//	return true;
//}
//
//long long arrtoll(int* _num, int _k)
//{
//	long long a = 0;
//	for (int i = 0; i < _k + 1; i++)
//	{
//		v.push_back(_num[i]);
//	}
//	reverse(v.begin(), v.end());
//	for (int i = _k; i > 0; i--)
//	{
//		a += (pow(10, i) * v[i]);
//	}
//	a += v[0];
//	v.clear();
//	return a;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> k;
//	for (int i = 0; i < k; i++)
//	{
//		cin >> c;
//		s.push_back(c);
//	}
//	
//	do
//	{
//		if (check(k))
//		{
//			b = arrtoll(num, k);
//			if (b > ret_max)
//			{
//				s_ret_max.clear();
//				ret_max = b;
//				for (int i = 0; i <= k; i++)
//				{
//					s_ret_max += to_string(num[i]);
//				}
//			}
//			if (b < ret_min)
//			{
//				s_ret_max.clear();
//				ret_min = b;
//				for (int i = 0; i <= k; i++)
//				{
//					s_ret_min += to_string(num[i]);
//				}
//			}
//		}
//	} while (next_permutation(&num[0], &num[0] + 10));
//
//	cout << s_ret_max << endl;
//	cout << s_ret_min << endl;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//typedef long long ll;
//using namespace std;
//int n, check[10];
//char a[20];
//vector<string> ret;
//bool good(char x, char y, char op) 
//{
//	if (x < y && op == '<') return true;
//	if (x > y && op == '>') return true;
//	return false;
//}
//void go(int idx, string num) 
//{
//	if (idx == n + 1) 
//	{
//		ret.push_back(num); return;
//	}
//	for (int i = 0; i <= 9; i++) 
//	{
//		if (check[i]) continue;
//		if (idx == 0 || good(num[idx - 1], i + '0', a[idx - 1])) 
//		{
//			check[i] = 1;
//			go(idx + 1, num + to_string(i));
//			check[i] = 0;
//		}
//	}
//	return;
//}
//int main() 
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	for (int i = 0; i < n; i++) cin >> a[i];
//	go(0, "");
//	sort(ret.begin(), ret.end());
//	cout << ret[ret.size() - 1] << "\n" << ret[0] << "\n";
//}

#pragma endregion