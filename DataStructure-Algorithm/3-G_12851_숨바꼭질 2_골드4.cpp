#pragma region solve

//#include <iostream>
//#include <queue>
//#define endl '\n'
//using namespace std;
//
//int visited[100004];
//long long cnt[100004];
//int n, k;
//int main()
//{
//	ios_base::sync_with_stdio(0); cin.tie(0);
//	cin >> n >> k;
//	if (n == k)
//	{
//		puts("0"); puts("1");
//		return 0;
//	}
//
//	// 1로 만들어서 나중에 1을 빼야한다. 
//	// 방문했는지 체크하기 위해서 0이 되면
//	// 방문하지 않은줄 알기 때문에 1로 설정함.
//	visited[n] = 1;
//	cnt[n] = 1;
//	queue<int> q;
//	q.push(n);
//	while (q.size())
//	{
// 		int now = q.front(); q.pop();
//		for (int next : {now - 1, now + 1, now * 2})
//		{
//			if (0 <= next && next <= 100000)
//			{
//				if (!visited[next])
//				{
//					q.push(next);
//					visited[next] = visited[now] + 1;
//					cnt[next] += cnt[now];
//				}
//				else if (visited[next] == visited[now] + 1)
//				{
//					cnt[next] += cnt[now];
//				}
//			}
//		}
//	}
//	cout << visited[k] - 1 << endl;
//	cout << cnt[k] << endl;
//	return 0;
//}

#pragma endregion 