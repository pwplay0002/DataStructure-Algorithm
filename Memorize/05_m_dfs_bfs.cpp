#pragma region �Ĺ�Ȩ ����

// �� ����
// �Ѽ��� ķ���� ��ġ�� ���� ���ư��� �Ѵ�.�Ѽ��� ���� ���� �Ʒ����� �ְ�
// ���� ������ ���� �ִ�.�׸��� �Ѽ��� ���� ���ư��� ����� �پ��ϴ�.
// ��, �Ѽ��� �ȶ��Ͽ� �ѹ� ����ģ ���� �ٽ� �湮������ �ʴ´�.
// 
//       cdef  ...f  ..ef  ..gh  cdeh  cdej  ...f
//       bT..  .T.e  .Td.  .Tfe  bTfg  bTfi  .Tde
//       a...  abcd  abc.  abcd  a...  a.gh  abc.
// �Ÿ� :  6     6     6     8     8    10    6
// 
// �� ������ �Ѽ��� ���� ���ư� �� �ִ� ��� ��츦 ��Ÿ�� ���̴�.T�� ǥ�õ� �κ��� ���� ���ϴ� �κ��̴�.������ R x C �ʿ� ������ �κ��� �־����� �Ÿ� K�� �־����� �Ѽ��� �������� �����ϴ� ��� �� �Ÿ��� K�� �������� ���ϴ� ���̴�.
// �Է�
// 
// ù �ٿ� ���� R(1 �� R �� 5), C(1 �� C �� 5), K(1 �� K �� R��C)�� �������� ���еǾ� �־�����.�� ��°���� R + 1��° �ٱ����� R��C ���� ������ ��Ÿ���� '.'�� 'T'�� ������ ���̰� C�� ���ڿ��� �־�����.
// ���
// 
// ù �ٿ� �Ÿ��� K�� �������� ����Ѵ�.
// �� ���� �Է� 1
// 
// 3 4 6
// ....
// .T..
// ....
// 
// �� ���� ��� 1
// 
// 4

#pragma endregion


#pragma region solve

#include <iostream>
using namespace std;
const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { -1, 0, 1, 0 };
int n, m, k, visited[10][10];
char a[10][10];
string s;
int go(int x, int y)
{
	if (x == 0 && y == m - 1)
	{
		if (k == visited[x][y]) return 1;
		return 0;
	}
	int ret = 0;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= m || visited[nx][ny] || a[nx][ny] == 'T') continue;
		visited[nx][ny] = visited[x][y] + 1;
		ret += go(nx, ny);
		visited[nx][ny] = 0;
	}
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			a[i][j] = s[j];
		}
	}
	visited[n - 1][0] = 1;
	cout << go(n - 1, 0) << "\n";

	return 0;
}

#pragma endregion

#pragma region ����

#include <iostream>
#define endl '\n'

const int dx[] = { 0, 1, 0, -1 };
const int dy[] = { 1, 0, -1, 0 };
int n, m, k, visited[10][10];
char a[10][10];
string s;
int go(int x, int y)
{
	if (x == 0 && y == m - 1)
	{
		if (k == visited[x][y]) return 1;
		return 0;
	}
	int ret = 0;
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= n || ny >= m || visited[nx][ny] || a[nx][ny] == 'T') continue;
		visited[nx][ny] = visited[x][y] + 1;
		ret += go(nx, ny);
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << visited[i][j] << " ";
			}
			cout << endl;
		}
		visited[nx][ny] = 0;
	}
	return ret;
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			a[i][j] = s[j];
		}
	}
	visited[n - 1][0] = 1;
	cout << go(n - 1, 0) << "\n";

	return 0;
}

#pragma endregion