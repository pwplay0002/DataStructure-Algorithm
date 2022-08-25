//#include <iostream>
//#include <vector>
//#define endl '\n';
//
//using namespace std;
//
//int n = 5, k = 3;
//void print(vector<int> b)
//{
//	for (int i : b) cout << i << " ";
//	cout << endl;
//}
// 
//void combination(int start, vector<int> b)
//{
//	if (b.size() == k)
//	{
//		print(b);
//		return;
//	}
//	for (int i = start + 1; i < n; i++)
//	{
//		b.push_back(i);
//		combination(i, b);
//		b.pop_back();
//	}
//}
//
//int main()
//{
//	vector<int> b;
//	combination(-1, b);
//
//	return 0;
//}