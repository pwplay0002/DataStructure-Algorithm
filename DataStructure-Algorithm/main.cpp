#include <iostream>
#include <stack>
#include <utility>
using namespace std;

/*
	���� �ذ� ���
	1. ���ڰ� ������ ���� �ȿ� �ִ� ���� ��
	2. ���þȿ� �ִ� ��(top) ���� ���� ��� ���þȿ� �� ���� �ְ� ���� ���� index ���
	3. �� Ŭ ��� ���� �ȿ� �ִ� ���� pop�ϸ鼭 ���� ��찡 ���� �� ���� ��
	4. ���� �� ���� ��찡 ������ �ʾҴٸ� 0���
	5. �� ���� ��찡 ���Դٸ� �� ���� index ���.
*/

stack<pair<int, int>> tower; // first : N, second : height
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int count = 0;
	int temp = 0;
	int first = 0;
	cin >> count;
	cin >> first;
	tower.push({ 1, first });
	cout << 0 << ' ';
	for (int i = 1; i < count; i++)
	{
		// ���� ����
		cin >> temp;

		while (!tower.empty())
		{
			if (tower.top().second > temp)
			{
				cout << tower.top().first << ' ';
				tower.push({ i + 1 , temp });
				break;
			}
			else if (tower.top().second == temp)
			{
				cout << tower.top().first << ' ';
				tower.pop();
				tower.push({ i + 1 , temp });
				break;
			}
			else if (tower.top().second < temp)
				tower.pop();

			if (tower.empty())
			{
				cout << 0 << ' ';
				tower.push({ i + 1, temp });
				break;
			}
		}
	}
	return 0;
}