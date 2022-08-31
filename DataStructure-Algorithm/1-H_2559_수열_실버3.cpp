#pragma region my solve

//#include <iostream>
//#define endl '\n'
//
//using namespace std;
//int psum[100100];
//int num[100100];
//int N, K;
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	cin >> N >> K;
//	int big = -2100000000;
//	int temp = 0;
//	if (N != K)
//	{
//		for (int i = 0; i < N; i++)
//		{
//			cin >> num[i];
//		}
//		for (int i = 0; i < K; i++)
//		{
//			psum[0] += num[i];
//		}
//		if (psum[0] > big) big = psum[0];
//		for (int i = 1; i < N - K + 1; i++)
//		{
//			psum[i] = psum[i - 1];
//			psum[i] -= num[i - 1];
//			psum[i] += num[i + K - 1];
//			if (psum[i] > big) big = psum[i];
//		}
//	}
//	else
//	{
//		for (int i = 0; i < N; i++)
//		{
//			cin >> num[i];
//			temp += num[i];
//		}
//		big = temp;
//	}
//
//	cout << big;
//
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <algorithm>
//#define endl '\n'
//
//using namespace std;
//int n, k, temp, psum[100001], ret = -1000000;
//int main() 
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> temp;
//		psum[i] = psum[i - 1] + temp;
//	}
//
//	for (int i = k; i <= n; i++)
//	{
//		ret = max(ret, psum[i] - psum[i - k]);
//	}
//	cout << ret << endl;
//}

#pragma endregion