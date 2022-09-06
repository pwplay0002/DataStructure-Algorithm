#pragma region bfs ����

//�¿��̴� ����� �����ؼ� ��ٸ�Ŷ�� �����Ͼ�� ����ߴ�.
//����� �ſ������ϱ� ������ ���� ������� ���.
//�� ������� ��ĭ ������ ������ ����� �������鼭 ����.
//��, "��ĭ" ������ �� "����Ѱ�"�� �Ҹ�ȴٴ� ���̴�.
//�¿��̴� ���õ� ��ħ 9�ÿ� �Ͼ ��ٸ�Ŷ���� ����ϰ��� �Ѵ�.
//�¿��̴� �ִܰŸ��� ��ٸ�Ŷ���� ���Ѵٰ� �� �� 
//��ٸ�� �Ҹ��ؾ� ��ٸ�Ŷ�� �� �� �ִ��� �˾ƺ���.
//�� �� �¿��̴� �����θ� �� �� ������ �ٴٷδ� ������.
//���� 1�� ������ 0�� �ٴٸ� ����Ų��.�¿��̴� �����¿�θ� �� �� �ִ�.
//
//�� �Է�
//���� ���α��� N�� ���α��� M �� �־����� �̾ N * M�� ���� �־�����.
//�� ���� �ٿ� �¿����� ��ġ(x, y)�� ��ٸ�Ŷ�� ��ġ(x, y)�� �־�����.
//
//�� ���
//����� � �Ҹ��ؾ� �ϴ��� ����϶�.
//
//�� ����
//1 <= N <= 100
//1 <= M <= 100
//
//�� �����Է�
//5 5
//0 0
//4 4
//1 0 1 0 1
//1 1 1 0 1
//0 0 1 1 1
//0 0 1 1 1
//0 0 1 1 1
//
//�� �������
//9
#pragma endregion 

#pragma region ����

#include<iostream>
#include <tuple>
#include<queue>
#define endl '\n'
using namespace std;
int a[104][104];
int visited[104][104];
int n, m, sx, sy, ex, ey, x, y;
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { -1, 0, 1, 0 };
int main()
{
	cin >> n >> m;
	cin >> sx >> sy;
	cin >> ex >> ey;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	queue<pair<int, int>> q;
	visited[sx][sy] = 1;
	q.push({ sx, sy });
	while (q.size())
	{
		tie(x, y) = q.front(); q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= n || a[nx][ny] == 0) continue;
			if (visited[nx][ny]) continue;
			visited[nx][ny] = visited[x][y] + 1;
			q.push({ nx, ny });
		}
	}
	cout << visited[ex][ey] << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << visited[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}

#pragma endregion 