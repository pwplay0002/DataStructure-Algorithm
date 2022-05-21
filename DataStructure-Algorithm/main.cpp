#pragma once
#include <iostream>

// ***** Queue *****

#define MAX_QUEUE_SIZE 100005

template <typename T>
class queue
{
public:
    queue() : mHead(0), mTail(0) {}

    void push(T value)
    {
        data[mTail++] = value;
    }

    T pop()
    {
        if (empty()) return -1;
        return data[mHead++];
    }

    int size()
    {
        return mTail - mHead;
    }

    bool empty()
    {
        return (size() == 0);
    }

    T front()
    {
        if (empty()) return -1;
        return data[mHead];
    }

    T back()
    {
        if (empty()) return -1;
        return data[mTail - 1];
    }
private:
    int mHead;	// 다음 삭제될 위치를 가리키는 값
    int mTail;	// 다음 삽입될 위치를 가리키는 값
    T data[MAX_QUEUE_SIZE];
};
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;
    int num = 0;
    string command;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> command;
        if (command == "push")
        {
            int value = 0;
            cin >> value;
            q.push(value);
        }
        else if (command == "pop")
        {
            if (q.empty()) cout << -1 << endl; 
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (command == "size")
        {
            cout << q.size() << endl;
        }
        else if (command == "empty")
        {
            cout << q.empty() << endl;
        }
        else if (command == "front")
        {
            if (q.empty()) cout << -1 << endl;
            else cout << q.front() << endl;
        }
        else if (command == "back")
        {
            if (q.empty()) cout << -1 << endl;
            else cout << q.back() << endl;
        }
    }
    return 0;
}