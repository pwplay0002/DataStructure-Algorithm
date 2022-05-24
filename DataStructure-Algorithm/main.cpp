#include <iostream>
#include "DataStructure/queue/CircularQueue.h"
using namespace std;

int main(void) 
{
    CircularQueue<int> cq(6);
    cq.push(100);
    cq.push(200);
    cq.push(300);
    cq.push(400);
    cq.push(500);
    cq.pop();
    cq.pop();
    cq.pop();
    cq.pop();
    cq.push(600);
    cq.push(700);
    cq.push(800);
    cq.PrintQueue();
    cout << "cq size : " << cq.size() << endl;
    CircularQueue<int> cq2(cq);
    CircularQueue<int> cq3 = cq;
    cq2.PrintQueue();
    cout << "cq2 size : " << cq.size() << endl;
    cq3.PrintQueue();
    cout << "cq3 size : " << cq.size() << endl;
    
    
    for (int i = 0; i < 6; i++)
    {
        cout << cq.data[i] << ' ';
    }
    const int a = 10;
    int b = a;
    return 0;
}