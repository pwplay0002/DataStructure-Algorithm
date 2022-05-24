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

    // C++ STL queue에는 기본 생성자밖에 없지만 들어올 메모리 크기가 
    // 정해진다면 이 방법이 더 빠르므로 사용자 정의 생성자를 추가함.
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

        // 앞으로 당기는 코드
        for (int i = 0; i < size(); i++)
        {
            mData[i] = mData[i + 1];
        }
        mTail--;
        
        // MEMORY_POOL만큼 메모리가 남아있을 때 재할당
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
    int mHead;	// 다음 삭제될 위치를 가리키는 값 (front라고도 부름)
    int mTail;	// 다음 삽입될 위치를 가리키는 값 (rear라고도 부름)
    int mMaxSize;
    T* mData;
};