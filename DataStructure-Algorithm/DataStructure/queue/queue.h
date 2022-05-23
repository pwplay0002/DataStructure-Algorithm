#pragma once

// ***** Static Queue *****

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
    int mHead;	// 다음 삭제될 위치를 가리키는 값 (front라고도 부름)
    int mTail;	// 다음 삽입될 위치를 가리키는 값 (rear라고도 부름)
    T data[MAX_QUEUE_SIZE];
};