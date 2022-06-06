#include <iostream>
#include "DataStructure/list/LinkedList.h"
using namespace std;

/*
	���� �ذ� ���
	1. ���ڰ� ������ ���� �ȿ� �ִ� ���� ��
	2. ���þȿ� �ִ� ��(top) ���� ���� ��� ���þȿ� �� ���� �ְ� ���� ���� index ���
	3. �� Ŭ ��� ���� �ȿ� �ִ� ���� pop�ϸ鼭 ���� ��찡 ���� �� ���� ��
	4. ���� �� ���� ��찡 ������ �ʾҴٸ� 0���
	5. �� ���� ��찡 ���Դٸ� �� ���� index ���.
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