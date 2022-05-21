#pragma once

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
    int mHead;	// ���� ������ ��ġ�� ����Ű�� ��
    int mTail;	// ���� ���Ե� ��ġ�� ����Ű�� ��
    T data[MAX_QUEUE_SIZE];
};