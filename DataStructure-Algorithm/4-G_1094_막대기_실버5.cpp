#pragma region my solve

//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> bars;
//
//int x, ret;
//
//int getBarLen()
//{
//	int sum = 0;
//	for (int i : bars) sum += i;
//	return sum;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> x;
//	int bar = 64;
//	bars.push_back(bar);
//	while (true)
//	{
//		if (getBarLen() == x) { cout << bars.size(); return 0; }
//		if(getBarLen() > x)
//		{
//			int temp = bars[bars.size() - 1]; // 가지고 있는 막대 중 가장 짧은 것 절반으로 자른다.
//			if (temp == 1)
//			{
//				bars.pop_back();
//				if (getBarLen() == x) cout << bars.size(); return 0;
//			}
//			bars.pop_back();
//			bars.push_back(temp / 2);
//			if(getBarLen() > x) continue;
//			bars.push_back(temp / 2);
//		}
//		
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//using namespace std;
//int n, ret = 1;
//int main()
//{
//	cin >> n;
//	while (n != 1)
//	{
//		if (n & 1) ret++;
//		n /= 2;
//	}
//	cout << ret;
//	return 0;
//}

#pragma endregion