 //승원이는 당근을 좋아해서 당근마킷에 엔지니어로 취업했다.
 //당근을 매우좋아하기 때문에 차도 당근차를 샀다.
 //이 당근차는 한칸 움직일 때마다 당근을 내뿜으면서 간다.
 //즉, "한칸" 움직일 때 "당근한개"가 소모된다는 것이다.
 //승원이는 오늘도 아침 9시에 일어나 당근마킷으로 출근하고자 한다.
 //승원이는 최단거리로 당근마킷으로 향한다고 할 때 
 //당근몇개를 소모해야 당근마킷에 갈 수 있는지 알아보자.
 //이 때 승원이는 육지로만 갈 수 있으며 바다로는 못간다.
 //맵의 1은 육지며 0은 바다를 가리킨다.승원이는 상하좌우로만 갈 수 있다.
 //
 //● 입력
 //맵의 세로길이 N과 가로길이 M 이 주어지고 이어서 N * M의 맵이 주어진다.
 //그 다음 줄에 승원이의 위치(x, y)와 당근마킷의 위치(x, y)가 주어진다.
 //
 //● 출력
 //당근을 몇개 소모해야 하는지 출력하라.
 //
 //● 범위
 //1 <= N <= 100
 //1 <= M <= 100
 //
 //● 예제입력
 //5 5
 //0 0
 //4 4
 //1 0 1 0 1
 //1 1 1 0 1
 //0 0 1 1 1
 //0 0 1 1 1
 //0 0 1 1 1
 //
 //● 예제출력
 //9

//#include <iostream>
//#include <queue>
//#define endl '\n'
//using namespace std;
//
//const int max_n = 104;
//int dx[4] = { 0, 1, 0, -1 };
//int dy[4] = { -1, 0, 1, 0 };
//int n, m, a[max_n][max_n], visited[max_n][max_n], x, y, sx, sy, ex, ey;
//
//int main()
//{
//	cin >> n >> m;
//	cin >> sy >> sx;
//	cin >> ey >> ex;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	queue<pair<int, int>> q;
//	visited[sx][sy] = 1;
//	q.push({ sx, sy });
//	while (q.size())
//	{
//		tie(x, y) = q.front(); q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (nx < 0 || ny < 0 || nx >= n || ny >= m || a[nx][ny] == 0)continue;
//			if (visited[nx][ny])continue;
//			visited[nx][ny] = visited[x][y] + 1;
//			q.push({ nx, ny });
//		}
//	}
//	cout << visited[ex][ey] << endl;
//	// 최단거리 디버깅
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << visited[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}