//#include <iostream>
//
//using namespace std;
//
////! Á¡È­½Ä DP(N) = min(DP(N-3), DP(N-5)) + 1
//
//int DP[50000];
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	int N;
//	cin >> N;
//	DP[3] = DP[5] = 1;
//
//	for(int i = 6; i <= N; i++)
//	{
//		if (DP[i - 3]) DP[i] = DP[i - 3] + 1;
//
//		if (DP[i - 3]) DP[i] = min(DP[i], DP[i - 3] + 1);
//		if (DP[i - 5]) DP[i] = DP[i] ? min(DP[i], DP[i - 5] + 1) : DP[i - 5] + 1;
//	}
//	if (DP[N] == 0) cout << -1;
//	else cout << DP[N];
//
//	return 0;
//}
