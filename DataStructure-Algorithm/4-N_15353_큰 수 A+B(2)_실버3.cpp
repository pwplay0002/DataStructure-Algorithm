#pragma region my solve

//#include <iostream>
//#include <vector>
//using namespace std;
//vector<char> v;
//string a, b;
//
//string CalStr(string& a, string& b)
//{
//	string ret;
//	int up = 0;
//	for(int i = a.size() - 1; i >= 0; i--)
//	{
//		int temp = int(a[i]) + int(b[i]) + up;
//		if (temp >= ('5' + '5'))
//		{
//			ret = (char)(temp - 58) + ret;
//			up = 1;
//		}
//		else
//		{
//			ret = (char)(temp - 49 + 1) + ret;
//			up = 0;
//		}
//	}
//	if (up == 1) ret = '1' + ret;
//	return ret;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> a >> b;
//	bool IsABig = true;
//	a.size() > b.size() ? IsABig = true : IsABig = false;
//	int sDiff = abs(int(a.size() - b.size()));
//	if(a.size() > b.size() ? true : false)
//	{
//		for (int i = 0; i < sDiff; i++) b = '0' + b;
//		cout << CalStr(a, b);
//	}
//	else
//	{
//		for (int i = 0; i < sDiff; i++) a = '0' + a;
//		cout << CalStr(a, b);
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <string>
//using namespace std;
//string string_add(string a, string b)
//{
//	int sum = 0;
//	string ret;
//	while (a.size() || b.size() || sum) 
//	{
//		if (a.size()) 
//		{
//			sum += a.back() - '0';
//			a.pop_back();
//		}
//		if (b.size()) 
//		{
//			sum += b.back() - '0';
//			b.pop_back();
//		}
//		ret += (sum % 10) + '0';
//		sum /= 10;
//	}
//	reverse(ret.begin(), ret.end());
//	return ret;
//}
//string a, b;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> a >> b;
//	cout << string_add(a, b) << '\n';
//	return 0;
//}

#pragma endregion