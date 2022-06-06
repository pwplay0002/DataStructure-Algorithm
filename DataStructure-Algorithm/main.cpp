#include <iostream>
#include <stack>
#include <utility>
using namespace std;

/*
	문제 해결 방법
	1. 숫자가 들어오면 스택 안에 있는 수와 비교
	2. 스택안에 있는 수(top) 보다 작을 경우 스택안에 그 수를 넣고 앞의 스택 index 출력
	3. 더 클 경우 스택 안에 있는 수를 pop하면서 작을 경우가 나올 때 까지 비교
	4. 만약 더 작은 경우가 나오지 않았다면 0출력
	5. 더 작은 경우가 나왔다면 그 수의 index 출력.
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
		// 비교할 숫자
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