//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <map>
//using namespace std;
//
//map<string, int> order;
//int course_largest[11];
//
//void addResult(vector<int> course, vector<string>& answer)
//{
//	for(auto i : order)
//	{
//		for(int j : course)
//		{
//			if (i.second == course_largest[j] && i.first.length() == j && i.second > 1)
//			{
//				answer.push_back(i.first);
//			}
//		}
//	}
//	sort(answer.begin(), answer.end());
//}
//
//void pushOrder(string& orders, vector<int> v)
//{
//	string stemp = "";
//	for(int i : v)
//	{
//		stemp += orders[i];
//	}
//	order[stemp]++;
//	if(course_largest[v.size()] < order[stemp])
//	{
//		course_largest[v.size()] = order[stemp];
//	}
//}
//vector<vector<int>> combiV;
//
//int n, r;
//void combination(int start, vector<int> v)
//{
//	if(v.size() == r)
//	{
//		combiV.push_back(v);
//	}
//	for(int i = start + 1; i < n; i++)
//	{
//		v.push_back(i);
//		combination(i, v);
//		v.pop_back();
//	}
//}
//
//vector<string> solution(vector<string> orders, vector<int> course)
//{
//	for(string& i : orders)
//		sort(i.begin(), i.end());
//	vector<int> temp;
//	for(int i = 0; i < orders.size(); i++)
//	{
//		n = orders[i].length();
//		for(int j = 0; j < course.size(); j++)
//		{
//			r = course[j];
//			if(orders[i].length() >= course[j])
//			{
//				combination(-1, temp);
//			}
//		}
//		for (vector<int> j : combiV)
//		{
//			pushOrder(orders[i], j);
//		}
//		combiV.clear();
//	}
//
//	vector<string> answer;
//	addResult(course, answer);
//	
//	return answer;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	vector<string> orders = { "XYZ", "XWY", "WXA" };
//	vector<int> result = { 2, 3, 4 };
//	solution(orders, result);
//	return 0;
//}