#pragma once
#include <iostream>
#include "DataStructure/queue/CircularQueue.h"
#include "DataStructure/queue/queue.h"
using namespace std;
int main()
{
	CircularQueue<int> cq;
	
	for (int i = 0; i < 9999; i++)
	{
		cq.push(i);
	}
	cout << cq.size() << endl;
	cout << cq.back() << endl;
	cout << cq.front() << endl;

	cq.pop();
	cq.push(9999);
	cout << cq.back() << endl;
	cout << cq.front() << endl;
	return 0;
}