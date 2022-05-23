#pragma once

// ***** Dynamic Queue *****

#define MEMORY_POOL 4

template <typename T>
class DynamicQueue
{
public:
    DynamicQueue() : mHead(0), mTail(0), mMaxSize(MEMORY_POOL)
    {
        mData = new T[mMaxSize];
    }

    // C++ STL queue에는 기본 생성자밖에 없지만 들어올 메모리 크기가 
    // 정해진다면 이 방법이 더 빠르므로 사용자 정의 생성자를 추가함.
    DynamicQueue(int size) : mHead(0), mTail(0), mMaxSize(MEMORY_POOL)
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
    ~DynamicQueue()
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

        // 아래 if문은 실행되지 않을 코드이다.
        // pop실행 후 값이 당겨지지 않기 때문이다.
        // 그럼에도 이 코드를 작성한 이유는 다음에 작성할
        // Linear Queue에 대한 언질을 주는 것이다.
        if (mMaxSize - mTail >= MEMORY_POOL)
        {
            mMaxSize -= MEMORY_POOL;
            T* TData = new T[mMaxSize];
            for (int i = 0; i < mTail; i++) TData[i] = mData[i];
            delete[] mData;
            mData = TData;
        }
        return mData[mHead++];
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