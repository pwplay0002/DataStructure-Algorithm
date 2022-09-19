#pragma region my solve - wrong answer

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define endl '\n'
//using namespace std;
//
//struct node
//{
//	int score;
//	node* next;
//	node* otherNode;
//};
//node b1[22];
//node b2[3];
//node b3[3];
//node b4[5];
//int a[10];// = { 2, 4, 4, 3, 2, 3, 2, 1, 1, 1 };
//
//void SetMap()
//{
//	for (int i = 0; i < 21; i++)
//	{
//		b1[i].score = i * 2;
//		if(i < 22) b1[i].next = &b1[i + 1];
//	}
//	b1[21].score = 0;
//	b1[5].otherNode = &b2[0];
//	b1[10].otherNode = &b4[0];
//	b1[15].otherNode = &b3[0];
//
//	b2[0].score = 13;
//	b2[1].score = 16;
//	b2[2].score = 19;
//	b2[0].next = &b2[1];
//	b2[1].next = &b2[2];
//	b2[2].next = &b4[2];
//
//	b3[0].score = 28;
//	b3[1].score = 27;
//	b3[2].score = 26;
//	b3[0].next = &b3[1];
//	b3[1].next = &b3[2];
//	b3[2].next = &b4[2];
//
//	b4[0].score = 22;
//	b4[1].score = 24;
//	b4[2].score = 25;
//	b4[3].score = 30;
//	b4[4].score = 35;
//	b4[0].next = &b4[1];
//	b4[1].next = &b4[2];
//	b4[2].next = &b4[3];
//	b4[3].next = &b4[4];
//	b4[4].next = &b1[20];
//}
//
//bool checkBlue(node* n)
//{
//	if (n->score == 10 || n->score == 20 || n == &b1[15]) return true;
//	return false;
//}
//
//int go(int start, int cnt)
//{
//	node* current;
//	current = &b1[0];
//	int ret = 0;
//	bool blue = false;
//	for (int i = start; i < start + cnt; i++)
//	{
//		int dice = 0;
//		dice = a[i];
//		while (dice--)
//		{
//			if (current == &b1[21]) return ret;
//			if (blue) { current = current->otherNode; blue = false; }
//			else current = current->next;
//		}
//		ret += current->score;
//		if (checkBlue(current)) blue = true;
//		else blue = false;
//	}
//	return ret;
//}
//
//int n = 10, k = 4;
//vector<vector<int>> vv;// = { {0, 1, 2, 7 } };
//
//void combination(int start, vector<int>& v)
//{
//	if (v.size() == k)
//	{
//		if ((v[0] + v[1] + v[2] + v[3]) == 10)
//		{
//			vv.push_back(v);
//			return;
//		}
//	}
//	for (int i = start + 1; i < n; i++)
//	{
//		v.push_back(i);
//		combination(i, v);
//		v.pop_back();
//	}
//}
//int big, ret;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	int cntarr[4];
//	
//	SetMap();
//	vector<int> v;
//	combination(-1, v);
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	
//	do
//	{
//		for (int i = 0; i < vv.size(); i++)
//		{
//			big = 0;
//			big += go(0, vv[i][0]);
//			big += go(vv[i][0], vv[i][1]);
//			big += go(vv[i][0] + vv[i][1], vv[i][2]);
//			big += go(vv[i][0] + vv[i][1] + vv[i][2], vv[i][3]);
//			if (big > ret) ret = big;
//			if (big == 194)
//			{
//				cout << 210 << endl;
//			}
//		}
//	} while (next_permutation(&a[0], &a[0] + 10));
//
//	cout << ret;
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//const int INF = 987654321;
//int a[14], mal[4], n = 10;
//int v[104];
//vector<int> adj[54];
//int move(int here, int cnt) 
//{
//	if (here == 100) return 100;
//	if (adj[here].size() >= 2) 
//	{
//		here = adj[here][1]; cnt--;
//	}
//	if (cnt) 
//	{
//		queue<int>q;
//		q.push(here);
//		int there;
//		while (q.size()) 
//		{
//			int x = q.front(); q.pop();
//			there = adj[x][0];
//			q.push(there);
//			if (there == 100)break;
//			cnt--;
//			if (cnt == 0)break;
//		}
//		return there;
//	}
//	else return here;
//}
//bool isMal(int mal_idx, int idx) 
//{
//	if (mal_idx == 100) return false;
//	for (int i = 0; i < 4; i++) 
//	{
//		if (i == idx) continue;
//		if (mal[i] == mal_idx) return true;
//	}
//	return false;
//}
//void add(int here, int there) 
//{
//	adj[here].push_back(there);
//}
//void setMap() 
//{
//	for (int i = 0; i <= 19; i++) add(i, i + 1);
//	add(5, 21); add(21, 22); add(22, 23); add(23, 24);
//	add(15, 29); add(29, 30); add(30, 31); add(31, 24);
//
//	add(10, 27); add(27, 28); add(28, 24); add(24, 25);
//	add(25, 26); add(26, 20); add(20, 100);
//
//	v[1] = 2; v[2] = 4;  v[3] = 6; v[4] = 8; v[5] = 10;
//	v[6] = 12; v[7] = 14; v[8] = 16; v[9] = 18; v[10] = 20;
//	v[11] = 22; v[12] = 24; v[13] = 26; v[14] = 28; v[15] = 30;
//	v[16] = 32; v[17] = 34; v[18] = 36; v[19] = 38; v[20] = 40;
//	v[21] = 13; v[22] = 16; v[23] = 19;  v[24] = 25;
//	v[27] = 22; v[28] = 24; v[25] = 30; v[26] = 35;
//	v[29] = 28; v[30] = 27; v[31] = 26;
//}
//int go(int here) 
//{
//	if (here == n) return 0;
//	int ret = 0;
//	for (int i = 0; i < 4; i++) 
//	{
//		int temp_idx = mal[i];
//		int mal_idx = move(temp_idx, a[here]);
//		if (isMal(mal_idx, i)) continue;
//		mal[i] = mal_idx;
//		ret = max(ret, go(here + 1) + v[mal_idx]);
//		mal[i] = temp_idx;
//	}
//	//cout << "RET : " << ret << "\n";
//	return ret;
//}
//int main() 
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL); setMap();
//	for (int i = 0; i < n; i++) cin >> a[i];
//	cout << go(0) << "\n";
//	return 0;
//}

#pragma endregion