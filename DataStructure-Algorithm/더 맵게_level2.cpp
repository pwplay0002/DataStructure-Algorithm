//#include <string>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> scoville, int K)
//{
//	int answer = 0;
//	priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
//	for (int i = 0; i < scoville.size() - 1; i++)
//	{
//		int s1 = pq.top();
//		pq.pop();
//		int s2 = pq.top();
//		pq.pop();
//		int addScov = s1 + s2 * 2;
//		pq.push(addScov);
//		answer++;
//		if (pq.top() >= K)
//		{
//			return answer;
//		}
//	}
//	return -1;
//}