#pragma region my solve

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n, p, ret;
//bool che[4000001];
//vector<int> a;
//
//int main() 
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n;
//    for (int i = 2; i <= n; i++) 
//    {
//        if (che[i]) continue;
//        for (int j = 2 * i; j <= n; j += i) che[j] = 1;
//    }
//    for (int i = 2; i <= n; i++) 
//    {
//        if (!che[i]) 
//        {
//            a.push_back(i);
//        }
//    }
//    int s = 0, e = 0, sum = a.empty() ? 0 : a[0];
//    while (s < a.size()) 
//    {
//        if (sum == n) ret++; //누적합이 n과 같다면 개수를 증가시킨다.
//        if (sum >= n || e == a.size() - 1) { sum -= a[s++]; }
//        else { sum += a[++e]; }
//    }
//    cout << ret << '\n';
//    return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//using namespace std;
//bool che[4000001];
//int n, a[2000001], p, lo, hi, ret, sum;
//
//int main() 
//{
//	cin >> n;
//	for (int i = 2; i <= n; i++) 
//	{
//		if (che[i]) continue;
//		for (int j = 2 * i; j <= n; j += i) 
//		{
//			che[j] = 1;
//		}
//	}
//	for (int i = 2; i <= n; i++) 
//	{
//		if (!che[i]) a[p++] = i;
//	}
//	while (1) 
//	{
//		if (sum >= n) sum -= a[lo++];
//		else if (hi == p)break;
//		else sum += a[hi++];
//		if (sum == n) ret++;
//	}
//	cout << ret;
//}

#pragma endregion