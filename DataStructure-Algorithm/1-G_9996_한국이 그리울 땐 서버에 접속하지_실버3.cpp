#pragma region my solve
//
//#include <iostream>
//#include <algorithm>
//#define endl '\n'
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	string pat, front, back;
//	bool check = false;
//	cin >> n;
//	cin >> pat;
//	for (int i = 0; i < pat.length(); i++)
//	{
//		if (pat[i] != '*' && check == false)
//		{
//			front += pat[i];
//		}
//
//		if (pat[i] == '*')
//			check = true;
//
//		if (pat[i] != '*' && check == true)
//		{
//			back += pat[i];
//		}
//	}
//	check = true;
//	reverse(back.begin(), back.end());
//
//	for (int i = 0; i < n; i++)
//	{
//		string str;
//		cin >> str;
//		check = true;
//		if (str.length() < front.length() + back.length()) check = false;
//		for (int j = 0; j < front.length(); j++)
//		{
//			if (front[j] != str[j])
//				check = false;
//		}
//		reverse(str.begin(), str.end());
//		for (int j = 0; j < back.length(); j++)
//		{
//			if (back[j] != str[j])
//				check = false;
//		}
//		if (check)
//			cout << "DA" << endl;
//		else
//			cout << "NE" << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve
//#include<bits/stdc++.h> 
//using namespace std;
//int n;
//string s, ori_s, pre, suf;
//int main() {
//    cin >> n;
//    cin >> ori_s;
//    int pos = ori_s.find('*');
//    pre = ori_s.substr(0, pos);
//    suf = ori_s.substr(pos + 1);
//    for (int i = 0; i < n; i++) {
//        cin >> s;
//        if (pre.size() + suf.size() > s.size()) {
//            cout << "NE\n";
//        }
//        else {
//            if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) cout << "DA\n";
//            else cout << "NE\n";
//        }
//    }
//    return 0;
//}
#pragma endregion

#pragma region my 're' solve

//#include <iostream>
//#include <string>
//#define endl '\n'
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int N;
//	string str, pre, suf;
//	cin >> N;
//	cin >> str;
//
//	int pos = str.find('*');
//	pre = str.substr(0, pos);
//	suf = str.substr(pos + 1);
//
//	for (int i = 0; i < N; i++)
//	{
//		string s;
//		cin >> s;
//		if (s.length() < pre.length() + suf.length())
//			cout << "NE" << endl;
//		else
//		{
//			if (pre == s.substr(0, pre.size()) && suf == s.substr((s.length() - suf.length())))
//				cout << "DA" << endl;
//			else cout << "NE" << endl;
//		}
//	}
//
//	return 0;
//}

#pragma endregion