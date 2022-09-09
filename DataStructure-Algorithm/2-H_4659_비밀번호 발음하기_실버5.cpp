#pragma region my solve

//#include <iostream>
//#include <string>
//#define endl '\n'
//using namespace std;
//
//// vowel 모음 (a e i o u)
//// consonant 자음
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//
//	while (1)
//	{
//		bool check = true;
//		int vcnt = 0;
//		int ccnt = 0;
//		char c = 0;
//		string s;
//
//		cin >> s;
//		if (s == "end") break;
//		// 1
//		if (s.find('a') != string::npos || 
//			s.find('i') != string::npos || 
//			s.find('e') != string::npos || 
//			s.find('o') != string::npos ||
//			s.find('u') != string::npos)
//		{
//		}
//		else
//		{
//			check = false;
//		}
//
//		if (check)
//		{
//			c = s[0];
//			for (int i = 0; i < s.size(); i++)
//			{
//				if (i >= 1)
//				{
//					if (c == s[i] && c != 'e' && c != 'o')
//					{
//						check = false;
//						break;
//					}
//					else c = s[i];
//				}
//
//				if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u')
//				{
//					vcnt++;
//					ccnt = 0;
//				}
//				else
//				{
//					ccnt++;
//					vcnt = 0;
//				}
//
//				if (vcnt >= 3 || ccnt >= 3)
//				{
//					check = false;
//					break;
//				}
//			}
//		}
//
//		if (check) cout << '<' << s << '>' << " is acceptable." << endl;
//		else cout << '<' << s << '>' << " is not acceptable." << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//string s;
//int lcnt, vcnt;
//bool isVowel(int idx)
//{
//	return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
//}
//
//int main()
//{
//	while (true)
//	{
//		cin >> s;
//		if (s == "end")break;
//		lcnt = vcnt = 0;
//		bool flag = 0;
//		bool is_include_v = 0;
//		int prev = -1;
//		for (int i = 0; i < s.size(); i++)
//		{
//			int idx = s[i];
//			if (isVowel(idx))lcnt++, vcnt = 0, is_include_v = 1;
//			else vcnt++, lcnt = 0;
//			if (vcnt == 3 || lcnt == 3) flag = 1;
//			if (i >= 1 && (prev == idx) && (idx != 'e' && idx != 'o'))
//			{
//				flag = 1;
//			}
//			prev = idx;
//		}
//		if (is_include_v == 0) flag = 1;
//		if (flag) cout << "<" << s << ">" << " is not acceptable." << endl;
//		else cout << "<" << s << ">" << " is acceptable." << endl;
//	}
//	return 0;
//}

#pragma endregion