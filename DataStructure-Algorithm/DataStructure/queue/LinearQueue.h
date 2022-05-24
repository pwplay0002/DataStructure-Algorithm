#pragma once

// ***** Dynamic Queue *****

#define MEMORY_POOL 4

template <typename T>
class LinearQueue
{
public:
    LinearQueue() : mHead(0), mTail(0), mMaxSize(MEMORY_POOL)
    {
        mData = new T[mMaxSize];
    }

    // C++ STL queue���� �⺻ �����ڹۿ� ������ ���� �޸� ũ�Ⱑ 
    // �������ٸ� �� ����� �� �����Ƿ� ����� ���� �����ڸ� �߰���.
    LinearQueue(int size) : mHead(0), mTail(0), mMaxSize(MEMORY_POOL)
    {
        if (mMaxSize > size) mData = new T[mMaxSize];
        else if (mMaxSize <= size)
        {
            if (size % mMaxSize == 0)
            {
                mMaxSize = ((int)(size / mMaxSize)) * mMaxSize;
                mData = new T[mMaxSize];
            }
            else
            {
                mMaxSize = ((int)(size / mMaxSize) + 1) * mMaxSize;
                mData = new T[mMaxSize];
            }
        }
    }
    ~LinearQueue()
    {
        delete[] mData;
    }

    void push(T value)
    {
        if (mTail >= mMaxSize)
        {
            mMaxSize += MEMORY_POOL;
            T* TData = new T[mMaxSize];
            for (int i = 0; i < mTail; i++) TData[i] = mData[i];
            delete[] mData;
            mData = TData;
        }

        mData[mTail++] = value;
    }

    T pop()
    {
        if (empty()) return -1;

        // ������ ���� �ڵ�
        for (int i = 0; i < size(); i++)
        {
            mData[i] = mData[i + 1];
        }
        mTail--;
        
        // MEMORY_POOL��ŭ �޸𸮰� �������� �� ���Ҵ�
        if (mMaxSize - mTail >= MEMORY_POOL)
        {
            mMaxSize -= MEMORY_POOL;
            T* TData = new T[mMaxSize];
            for (int i = 0; i < mTail; i++) TData[i] = mData[i];
            delete[] mData;
            mData = TData;
        }
        return mData[mHead];
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
        return mData[mHead];
    }

    T back()
    {
        if (empty()) return -1;
        return mData[mTail - 1];
    }
private:
    int mHead;	// ���� ������ ��ġ�� ����Ű�� �� (front��� �θ�)
    int mTail;	// ���� ���Ե� ��ġ�� ����Ű�� �� (rear��� �θ�)
    int mMaxSize;
    T* mData;
};