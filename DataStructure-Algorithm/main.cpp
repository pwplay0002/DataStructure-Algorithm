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
    cout << "cq Head : "<< cq.mHead << endl;
    cout << "cq Tail : "<< cq.mTail << endl;
    cout << "cq front : " << cq.front() << endl;
    cout << "cq back : " << cq.back() << endl;
    cq.pop();
    cq.pop();
    cq.pop();
    cq.push(600);
    cq.push(700);
    cq.push(800);
    cout << "cq Head : " << cq.mHead << endl;
    cout << "cq Tail : " << cq.mTail << endl;
    cout << "cq front : " << cq.front() << endl;
    cout << "cq back : " << cq.back() << endl;
    //cq.push(800);
    cq.PrintQueue();
    //cout << "cq size : " << cq.size() << endl;
    CircularQueue<int> cq2(cq);
    //CircularQueue<int> cq3 = cq;
    cq2.PrintQueue();
    cout << "cq2 size : " << cq2.size() << endl;
    cout << "cq2 Head : " << cq2.mHead << endl;
    cout << "cq2 Tail : " << cq2.mTail << endl;
    cout << "cq2 front : " << cq2.front() << endl;
    cout << "cq2 back : " << cq2.back() << endl;
    //cq3.PrintQueue();
    cout << "cq size : " << cq.size() << endl;
    
    
    //for (int i = 0; i < 6; i++)
    //{
    //    cout << cq.data[i] << ' ';
    //}

    return 0;
}