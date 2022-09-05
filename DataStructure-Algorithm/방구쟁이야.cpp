// ● 문제
// 종화는 21세기 유명한 방구쟁이다.종화는 방구를 낄 때 "이러다... 다 죽어!!" 를 외치며
// 방구를 뀌는데 이렇게 방귀를 뀌었을 때  방귀는 상하좌우 네방향으로 뻗어나가며 
// 종화와 연결된 "육지"는 모두 다 오염된다. "바다"로는 방구가 갈 수 없다.
// 맵이 주어졌을 때 종화가 "이러다... 다 죽어!!"를 "최소한" 몇 번외쳐야 
// 모든 맵을 오염시킬 수 있는지 말해보자. 1은 육지며 0은 바다를 가리킨다.
// 
// ● 입력
// 맵의 세로길이 N과 가로길이 M 이 주어지고 이어서 N * M의 맵이 주어진다.
// 
// ● 출력
// "이러다... 다 죽어!!"를 몇번외쳐야하는지 출력하라.
// 
// ● 범위
// 1 <= N <= 100
// 1 <= M <= 100
// 
// ● 예제입력
// 5 5
// 1 0 1 0 1
// 1 1 0 0 1
// 0 0 0 1 1
// 0 0 0 1 1
// 0 1 0 0 0
// 
// ● 예제출력
// 4

#pragma region solve

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { -1, 0, 1, 0 };
//
//int a[104][104];
//int visited[104][104];
//int nx = 0, ny = 0;
//int n, m, ret;
//
//void dfs(int x, int y)
//{
//	if (visited[x][y]) return;
//	visited[x][y] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		nx = x + dx[i];
//		ny = y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;
//		if (a[nx][ny] == 1 && !visited[nx][ny]) dfs(nx, ny);
//	}
//	return;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (a[i][j] == 1 && !visited[i][j])
//			{
//				ret++;
//				dfs(i, j);
//			}
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

#pragma endregion
