#pragma region dfs

// �� ����
// ��ȭ�� 21���� ������ �汸���̴�.��ȭ�� �汸�� �� �� "�̷���... �� �׾�!!" �� ��ġ��
// �汸�� ��µ� �̷��� ��͸� ����� ��  ��ʹ� �����¿� �׹������� ������� 
// ��ȭ�� ����� "����"�� ��� �� �����ȴ�. "�ٴ�"�δ� �汸�� �� �� ����.
// ���� �־����� �� ��ȭ�� "�̷���... �� �׾�!!"�� "�ּ���" �� �����ľ� 
// ��� ���� ������ų �� �ִ��� ���غ���. 1�� ������ 0�� �ٴٸ� ����Ų��.
// 
// �� �Է�
// ���� ���α��� N�� ���α��� M �� �־����� �̾ N * M�� ���� �־�����.
// 
// �� ���
// "�̷���... �� �׾�!!"�� ������ľ��ϴ��� ����϶�.
// 
// �� ����
// 1 <= N <= 100
// 1 <= M <= 100
// 
// �� �����Է�
// 5 5
// 1 0 1 0 1
// 1 1 0 0 1
// 0 0 0 1 1
// 0 0 0 1 1
// 0 1 0 0 0
// 
// �� �������
// 4

#pragma endregion

#pragma region dfs ����

//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//int n, m;
//int ret;
//int a[104][104];
//bool visited[104][104];
//
//const int dx[] = { 0, 1, 0, -1 };
//const int dy[] = { -1, 0, 1, 0 };
//void dfs(int x, int y)
//{
//	if (visited[x][y])return;
//	visited[x][y] = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx < 0 || ny < 0 || nx >= 1000 || ny >= 1000) continue;
//		if(a[nx][ny] == 1 && !visited[nx][ny]) dfs(nx, ny);
//	}
//	return;
//}
//
//int main()
//{
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