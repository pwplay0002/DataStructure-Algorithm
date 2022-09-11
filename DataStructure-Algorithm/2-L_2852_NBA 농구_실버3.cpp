#pragma region my solve - cannot solve

//#include <iostream>
//#include <string>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//string s;
//int n, team;
//int t1, t2;
//int tt = 48 * 60;
//
//vector<pair<pair<int, int>, pair<int, int>>> note; // 1score 2score, 1time 2time
//pair<int, int> temp;
//pair<string, string> one;
//pair<string, string> two;
//int score1, score2;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> team >> s;
//		temp.first = stoi(s.substr(0, 2));
//		temp.second = stoi(s.substr(3, 2));
//		note.push_back({ { t1, t2 }, { -1, -1 } });
//		if (team == 1)
//		{
//			score1++;
//			note[i].second.first = temp.first * 60 + temp.second;
//		}
//		else 
//		{
//			score2++;
//			note[i].second.second = temp.first * 60 + temp.second;
//		} 
//		note[i].first.first = score1;
//		note[i].first.second = score2;
//	}
//	
//	for (int i = n - 1; i >= 0; i--)
//	{
//		//if(note[0])
//		if (note[i].first.first > note[i].first.second && note[i].second.first != -1)
//		{
//			t1 += tt - note[i].second.first;
//			tt = note[i].second.first;
//		}
//		else if (note[i].first.first < note[i].first.second && note[i].second.second != -1)
//		{
//			t2 += tt - note[i].second.second;
//			tt = note[i].second.second;
//		}
//		else if (note[i].first.first == note[i].first.second)
//		{
//			if (note[i].second.first != -1)
//				tt = note[i].second.first;
//			else
//				tt = note[i].second.second;
//		}
//		else
//		{
//			tt = tt;
//			//cout << "TTTTTTTTTTTT" << endl;
//		}
//	}
//	one.first = to_string(t1 / 60);
//	one.second = to_string(t1 % 60);
//	two.first = to_string(t2 / 60);
//	two.second = to_string(t2 % 60);
//
//	if (one.first == "0") one.first += '0';
//	if (one.second == "0") one.second += '0';
//	if (two.first == "0") two.first += '0';
//	if (two.second == "0") two.second += '0';
//
//	cout << one.first << ":" << one.second << endl;
//	cout << two.first << ":" << two.second << endl;
//
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <string>
//#define endl '\n'
//using namespace std;
//
//int n, o, A, B, asum, bsum;
//string s, prv;
//string print(int a)
//{
//	string d = "00" + to_string(a / 60);
//	string e = "00" + to_string(a % 60);
//	return d.substr(d.size() - 2, 2) + ":" + e.substr(e.size() - 2, 2);
//}
//
//int changeToInt(string a)
//{
//	return atoi(a.substr(0, 2).c_str()) * 60 + atoi(a.substr(3, 2).c_str());
//}
//void go(int& sum, string s)
//{
//	sum += (changeToInt(s) - changeToInt(prv));
//}
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> o >> s;
//		if (A > B) go(asum, s);
//		else if (B > A)go(bsum, s);
//		o == 1 ? A++ : B++;
//		prv = s;
//	}
//	if (A > B)go(asum, "48:00");
//	else if (B > A)go(bsum, "48:00");
//	cout << print(asum) << endl;
//	cout << print(bsum) << endl;
//	return 0;
//}

#pragma endregion