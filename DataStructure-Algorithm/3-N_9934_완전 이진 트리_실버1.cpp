#pragma region my solve

//#include <iostream>
//#include <vector>
//#include <cmath>
//#define endl '\n'
//using namespace std;
//int k, temp;
//int idx = 1;
//vector<int> d[14];
//vector<int> v;
//vector<int> v_idx = { 1 };
//
//vector<int>& operator +(vector<int>& a, vector<int>& b)
//{
//	int size = b.size();
//	for (int i = 0; i < size; i++)
//	{
//		a.push_back(b[i]);
//	}
//	return a;
//}
//
//vector<int>& operator ++(vector<int>& a)
//{
//	for (int i = 0; i < a.size(); i++)
//	{
//		a[i]++;
//	}
//	return a;
//}
//
//void makeIndex()
//{
//	if (idx == k) return;
//	idx++;
//	++v_idx;
//	v_idx = (v_idx + v_idx);
//	v_idx.insert(v_idx.begin() + (v_idx.size() / 2), 1);
//	makeIndex();
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> k;
//	for (int i = 1; i <= pow(2, k) - 1; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//	}
//	makeIndex();
//	char ctemp = 0;
//	for (int i = 0; i < pow(2, k) - 1; i++)
//	{
//		d[v_idx[i]].push_back(v[i]);
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j : d[i])
//		{
//			cout << j << " ";
//		}
//		if(i < k)
//			cout << endl;
//	}
//	return 0;
//}

#pragma endregion

#pragma region solve

//#include <iostream>
//#include <vector>
//
//using namespace std;
//vector<int> ret[14];
//int n, a[1030];
//void go(int s, int e, int level) 
//{
//    if (s > e) return;
//    if (s == e) 
//    {
//        ret[level].push_back(a[s]);
//        return;
//    }
//    int mid = (s + e) / 2;
//    ret[level].push_back(a[mid]);
//    go(s, mid - 1, level + 1);
//    go(mid + 1, e, level + 1);
//    return;
//}
//int main() 
//{
//    cin >> n;
//    int _end = (int)pow(2, n) - 1;
//    for (int i = 0; i < _end; i++) 
//    {
//        cin >> a[i];
//    }
//    go(0, _end, 1);
//    for (int i = 1; i <= n; i++) 
//    {
//        for (int j : ret[i]) 
//        {
//            cout << j << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
//}

#pragma endregion