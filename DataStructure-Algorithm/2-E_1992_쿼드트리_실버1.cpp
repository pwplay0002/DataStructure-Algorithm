#pragma region my solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//string str[66];
//void check(int n, int x, int y)
//{
//	if (n == 1)
//	{
//		cout << str[y][x];
//		return;
//	}
//	char temp = 0;
//	temp = str[y][x];
//	bool c = true;
//	for (int i = x; i < x + n; i++)
//	{
//		for (int j = y; j < y + n; j++)
//		{
//			if (!(temp == str[j][i]))
//			{
//				c = false; 
//				break;
//			}
//		}
//		if (!c) break;
//	}
//
//	if (!c)
//	{
//		cout << "(";
//		check(n / 2, x, y);
//		check(n / 2, x + n / 2, y);
//		check(n / 2, x, y + n / 2);
//		check(n / 2, x + n / 2, y + n / 2);
//		cout << ")";
//	}
//	else
//	{
//		cout << temp;
//	}
//}
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> str[i];
//	}
//	check(n, 0, 0);
//	
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//using namespace std;
//typedef long long int ll;
//int n;
//string s;
//char a[101][101];
//string quard(int y, int x, int size) 
//{
//    if (size == 1) return string(1, a[y][x]);
//    char b = a[y][x];
//    string ret = "";
//    bool flag = 0;
//    for (int i = y; i < y + size; i++) 
//    {
//        for (int j = x; j < x + size; j++) 
//        {
//            if (b != a[i][j]) 
//            {
//                ret += '(';
//                ret += quard(y, x, size / 2);
//                ret += quard(y, x + size / 2, size / 2);
//                ret += quard(y + size / 2, x, size / 2);
//                ret += quard(y + size / 2, x + size / 2, size / 2);
//                ret += ')';
//                return ret;
//            }
//        }
//    }
//    return string(1, a[y][x]);
//}
//int main() 
//{
//    ios_base::sync_with_stdio(0); cin.tie(NULL);
//    cin >> n;
//    for (int i = 0; i < n; i++) 
//    {
//        cin >> s;
//        for (int j = 0; j < n; j++) 
//        {
//            a[i][j] = s[j];
//        }
//    }
//    cout << quard(0, 0, n) << '\n';
//    return 0;
//}

#pragma endregion