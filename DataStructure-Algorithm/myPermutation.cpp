//#include <iostream>
//#include <vector>
//#define endl '\n'
//using namespace std;
//
//vector<int> v;
//
//void printV(vector<int>& v)
//{
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i];
//	cout << endl;
//}
//
//void myPermutation(int n, int r, int depth)
//{
//	cout << n << " : " << r << " : " << depth << endl;
//	if (r == depth)
//	{
//		printV(v);
//		return;
//	}
//	for (int i = depth; i < n; i++)
//	{
//		swap(v[i], v[depth]);
//		myPermutation(n, r, depth + 1);
//		swap(v[i], v[depth]);
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	myPermutation(3, 3, 0);
//	return 0;
//}