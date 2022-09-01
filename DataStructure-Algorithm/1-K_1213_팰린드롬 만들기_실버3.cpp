#pragma region my solve

//#include <iostream>
//#include <deque>
//#include <map>
//#define endl '\n'
//using namespace std;
//
//map<char, int> a;
//deque<char> ret;
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	
//	string name;
//	int check = 0;
//	cin >> name;
//	for (int i = 0; i < name.size(); i++)
//	{
//		a[name[i]]++;
//	}
//	pair<char, int> temp;
//	for (auto i : a)
//	{
//		if (i.second % 2 != 0)
//		{
//			check++;
//			temp = i;
//		}
//	}
//	if (check >= 2)
//		cout << "I'm Sorry Hansoo" << endl;
//	else
//	{
//		if(check == 1)
//		{
//			ret.push_back(temp.first);
//			temp.second--;
//		}
//
//		for (int i = 'Z'; i >= 'A'; i--)
//		{
//			for (int j = 0; j < a[(char)i] / 2; j++)
//			{
//				ret.push_front((char)i);
//				ret.push_back((char)i);
//			}
//		}
//	}
//	for(int i = 0; i < ret.size(); i++)
//	{
//		cout << ret[i];
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//using namespace std;
//string s, ret;
//int cnt[200], flag;
//char mid;
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cin >> s;
//	for (char a : s)cnt[a]++;
//	for(int i = 'Z'; i >= 'A'; i--)
//	{
//		if(cnt[i])
//		{
//			// È¦¼ö Ã¼Å©
//			if(cnt[i] & 1)
//			{
//				mid = char(i);
//				flag++;
//				cnt[i]--;
//			}
//			if (flag == 2) break;
//			for(int j = 0; j < cnt[i]; j+=2)
//			{
//				ret = char(i) + ret;
//				ret += char(i);
//			}
//		}
//	}
//	if (mid)ret.insert(ret.begin() + ret.size() / 2, mid);
//	if (flag == 2) cout << "I'm Sorry Hansoo" << endl;
//	else cout << ret << endl;
//	return 0;
//}

#pragma endregion