#pragma region my solve

// ������ anta tica�� �׻� ��� �ִ�
// ���⼭ �ߺ��� ���� acint 5���̴�.
// �׷� ������ k�� ���� 5������ ������ �ִ� ������ ������ 0�̴�.

//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n, k, ret;
//vector<string> words;
//vector<char> v; // �ߺ����� �ʴ� ���� ����
//vector<vector<int>> cases;
//string temp;
//
//void combination(int start, vector<int>& b)
//{
//	if(b.size() == k)
//	{
//		cases.push_back(b);
//		return;
//	}
//	for(int i = start + 1; i < v.size(); i++)
//	{
//		b.push_back(i);
//		combination(i, b);
//		b.pop_back();
//	}
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> k;
//	words.reserve(n);
//	words.resize(n);
//	for(int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		for(int j = 0; j < temp.size(); j++)
//		{
//			sort(temp.begin(), temp.end());
//			if(temp[j] == 'a' || temp[j] == 'c' || temp[j] == 'i' || temp[j] == 'n' || temp[j] == 't') continue;
//			words[i] += temp[j];
//			if (find(v.begin(), v.end(), temp[j]) == v.end())
//			{
//				v.push_back(temp[j]);
//			}
//		}
//		words[i].erase(unique(words[i].begin(), words[i].end()), words[i].end());
//	}
//
//	if (k < 5) { cout << 0; return 0; }
//	if (v.size() < k - 5) { cout << n; return 0; }
//	k -= 5;
//	vector<int> vt;
//	combination(-1, vt);
//	// ���̽��� �켱
//	for(int i = 0; i < cases.size(); i++)
//	{
//		string str = "";
//		int w = 0;
//		for(int j = 0; j < cases[i].size(); j++)
//		{
//			str += v[cases[i][j]];
//		}
//
//		for(int j = 0; j < n; j++)
//		{
//			if (str == words[j] || words[j].empty()) w++;
//			else if (str.length() > words[j].length())
//			{
//				bool check = true;
//				for (char c : words[j])
//				{
//					// ���ڰ� ���� ���
//					// �ܾ��� ���� �ϳ� �ϳ��� ���̽��� �ִ��� üũ
//					if (find(str.begin(), str.end(), c) == str.end())
//					{
//						check = false;
//						break;
//					}
//				}
//				if (check == true) w++;
//			}
//		}
//		ret = max(ret, w);
//	}
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//using namespace std;
//int n, m, words[51];
//string s;
//int count(int mask)
//{
//	int cnt = 0;
//	for(int word : words)
//	{
//		if (word && (word & mask) == word) cnt++;
//	}
//	return cnt;
//}
//
//int go(int index, int k, int mask)
//{
//	if (k < 0) return 0;
//	if (index == 26) return count(mask);
//	int ret = go(index + 1, k - 1, mask | (1 << index));
//	if(index != 'a' - 'a' && index != 'n' - 'a' && index != 't' - 'a' && index != 'i' - 'a' && index != 'c' - 'a')
//	{
//		ret = max(ret, go(index + 1, k, mask));
//	}
//	return ret;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for(int i = 0; i < n; i++)
//	{
//		cin >> s;
//		for(char str : s)
//		{
//			words[i] |= (1 << (str - 'a'));
//		}
//	}
//	cout << go(0, m, 0);
//	return 0;
//}

#pragma endregion