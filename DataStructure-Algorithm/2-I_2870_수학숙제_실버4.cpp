#pragma region my solve

//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#define endl '\n'
//using namespace std;
//
//string s;
//string temp;
//vector<string> v;
//int start, index;
//bool isStart = false;
//int zcnt;
//
//bool comp(string a, string b)
//{
//	int lenA = a.length();
//	int lenB = b.length();
//	if (lenA < lenB) return true;
//	else if (lenA > lenB) return false;
//	int res = a.compare(b);
//	if (a.compare(b) < 0)
//		return true;
//	else return false;
//}
//
//bool isNum(char _c)
//{
//	return (_c >= '0' && _c <= '9');
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	int n = 0;
//	cin >> n;
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s;
//		for (int j = 0; j < s.size(); j++)
//		{
//			if (isNum(s[j]))
//			{
//				if (isStart == false)
//				{
//					isStart = true;
//					start = j;
//				}
//				index++;
//			}
//			else
//			{
//				if (isStart)
//				{
//					temp = s.substr(start, index);
//					while(temp[zcnt] == '0' && zcnt != temp.size() - 1)
//					{
//						zcnt++;
//					}
//					if(zcnt && temp.length() > 1)
//					{
//						string temp2 = temp.substr(zcnt, temp.size() - zcnt);
//						v.push_back(temp2);
//						zcnt = 0;
//					}
//					else v.push_back(temp);
//				}
//				isStart = false;
//				index = 0;
//				continue;
//			}
//			if (j == (s.size() - 1))
//			{
//				if(isStart)
//				{
//					temp = s.substr(start, index);
//					while (temp[zcnt] == '0' && zcnt != temp.size() - 1)
//					{
//						zcnt++;
//					}
//					if (zcnt && temp.length() > 1)
//					{
//						string temp2 = temp.substr(zcnt, temp.size() - zcnt);
//						v.push_back(temp2);
//						zcnt = 0;
//					}
//					else v.push_back(temp);
//				}
//			}
//		}
//		isStart = false;
//		index = 0;
//	}
//	sort(v.begin(), v.end(), comp);
//	for (auto i : v)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int n;
//vector<string> v;
//string s, ret;
//void go() 
//{
//	if (ret.size()) 
//	{
//		while (true) 
//		{
//			if (ret.size() && ret.front() == '0')ret.erase(ret.begin());
//			else break;
//		}
//		if (ret.size() == 0) ret = "0";
//		v.push_back(ret);
//		ret = "";
//	}
//}
//bool cmp(string a, string b) 
//{
//	if (a.size() == b.size()) return a < b;
//	return a.size() < b.size();
//}
//int main() 
//{
//	cin >> n;
//	for (int i = 0; i < n; i++) 
//	{
//		cin >> s;
//		ret = "";
//		for (int j = 0; j < s.size(); j++) 
//		{
//			if (s[j] < 58)ret += s[j];
//			else 
//			{
//				go();
//			}
//		}
//		go();
//	}
//	sort(v.begin(), v.end(), cmp);
//	for (string i : v)cout << i << "\n";
//	return 0;
//}

#pragma endregion