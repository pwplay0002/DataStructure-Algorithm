#pragma region my solve

#include <iostream>
#include <cmath>
#include <string>
#define endl '\n'
typedef long long ll;
using namespace std;
ll temp = 1;
ll n;
int cnt = 0;
int main()
{
	cin >> n;
	while (cin >> n)
	{
		for (int j = 1; temp % n != 0; j++)
		{
			cnt++;
			temp = pow(10, j) + temp;
		}
		cout << cnt + 1;
		cnt = 0;
	}
	return 0;
}

#pragma endregion

#pragma region solve

#pragma endregion