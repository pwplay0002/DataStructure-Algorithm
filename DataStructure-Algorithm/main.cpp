#include <iostream>
#include "DataStructure/queue/LinearQueue.h"
using namespace std;

int main(void) 
{
    LinearQueue<int> lq;
    lq.push(100);
    lq.push(200);
    lq.push(300);
    lq.push(400);
    lq.push(500);
    lq.pop();
    lq.pop();
    cout << lq.front() << endl;
    cout << lq.back() << endl;
    return 0;
}