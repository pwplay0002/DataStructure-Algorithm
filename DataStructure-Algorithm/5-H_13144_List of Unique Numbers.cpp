#pragma region my solve

// 등차수열로 풀기 (투포인터 문제)
// n(n+1) / 2
//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//
//long long s, e, cnt[100001], n;
//long long ret;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//
//	cin >> n;
//	vector<long long> v(n);
// 	for (int i = 0; i < n; i++) cin >> v[i];
//	while (e < n)
//	{
//		// 중복 x
//		if (!cnt[v[e]])
//		{
//			cnt[v[e]]++;
//			e++;
//		}
//		else // 중복일 경우
//		{
//			ret += (e - s);
//			cnt[v[s]]--;
//			s++;
//		}
//	}
//	ret += ((e - s) * (e - s + 1)) / 2;
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<stack>
//#include<cstdio>
//using namespace std;
//long long s, e, cnt[100001], n, a[100001];
//long long ret;
//int main() {
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%lld", a + i);
//    }
//    while (e < n) {
//        if (!cnt[a[e]]) {
//            cnt[a[e]]++;
//            e++;
//        }
//        else {
//            ret += (e - s);
//            cnt[a[s]]--;
//            s++;
//        }
//    }
//    ret += (long long)(e - s) * (e - s + 1) / 2;
//    printf("%lld\n", ret);
//    return 0;
//}

#pragma endregion