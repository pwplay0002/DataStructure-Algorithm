#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, int> order;

int n, r;
vector<int> combination(int start, vector<int> v)
{
	if(v.size() == r)
	{
		return v;
	}
	for(int i = start + 1; i < n; i++)
	{
		v.push_back(i);
		combination(i, v);
		v.pop_back();
	}
}

vector<string> solution(vector<string> orders, vector<int> course)
{

	vector<string> answer;
	
	return answer;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	vector<string> orders = { "ABCFG", "AC", "CDE", "ACDE", "BCFG", "ACDEH" };
	vector<int> result = { 2,3,4 };
	solution(orders, result);
	return 0;
}