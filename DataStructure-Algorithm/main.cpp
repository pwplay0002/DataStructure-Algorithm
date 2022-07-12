#include <iostream>
#include <unordered_map>
#define endl '\n'
using namespace std;

long long N, P, Q;
unordered_map<long long, long long> um;
long long resolution(long long n)
{
	if (um.count(n)) return um[n];
	else return um[n] = resolution(n / P) + resolution(n / Q);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> P >> Q;
	um[0] = 1;
	cout << resolution(N) << endl;

	return 0;
}
