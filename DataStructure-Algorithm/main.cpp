#include <iostream>
#include "DataStructure/list/LinkedList.h"
using namespace std;

/*
	문제 해결 방법
	1. 숫자가 들어오면 스택 안에 있는 수와 비교
	2. 스택안에 있는 수(top) 보다 작을 경우 스택안에 그 수를 넣고 앞의 스택 index 출력
	3. 더 클 경우 스택 안에 있는 수를 pop하면서 작을 경우가 나올 때 까지 비교
	4. 만약 더 작은 경우가 나오지 않았다면 0출력
	5. 더 작은 경우가 나왔다면 그 수의 index 출력.
*/

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	LinkedList<int> ll;
	ll.push_front(100);
	ll.push_front(200);
	ll.push_front(300);
	ll.push_back(400);
	ll.push_back(500);
	ll.push_back(600);
	ll.display(ll.begin());
	return 0;
}