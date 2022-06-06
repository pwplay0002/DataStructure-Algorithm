#pragma once
#include <iostream>

#define MEMORY_POOL 4

inline void error(const char* message)
{
	puts(message);
	exit(EXIT_FAILURE);
}

template<typename T>
class deque
{
	// Default Constructor
	deque() : mMaxSize(mMaxSize), mDataSize(0), mHead(0), mTail(0), mMaxSize(MEMORY_POOL)
	{
		mData = new T[mMaxSize];
	}

	// Custom Constructor
	deque(const int size) : mMaxSize(mMaxSize), mDataSize(0), mHead(0), mTail(0), mMaxSize(MEMORY_POOL)
	{
		if (mMaxSize >= size) mDeque = new T[mMaxSize];
		else
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

	// Copy Constructor
	deque(const deque<T>& dq) : mMaxSize(dq.mMaxSize), mDataSize(dq.mDataSize), mHead(dq.mHead), mTail(dq.mTail)
	{
		mData = new T[mMaxSize];
		for (int i = 0; i < dq.mMaxSize; i++)
			data[i] = dq.mData[i];
	}

	// Move Constructor
	deque(deque<T>&& dq) : mMaxSize(dq.mMaxSize), mDataSize(dq.mDataSize), mHead(dq.mHead), mTail(dq.mTail)
	{
		dq.mMaxSize = 0;
		dq.mDataSize = 0;
		dq.mHead = 0;
		dq.mTail = 0;
		dq.mData = nullptr;
	}

	// Desturctor
	~deque() { delete[] mDeque; }

	void push_back(const T value)
	{
		if (mDataSize == mMaxSize)
		{
			mMaxSize += MEMORY_POOL;
			T* temp = new T[mMaxSize];
			mData = temp;
			temp = nullptr;
			mData[mTail] = value;
		}
	}

	void push_front(const T value)
	{

	}

	bool empty() const
	{
		return (mDataSize == 0);
	}

	int size() const
	{
		return mDataSize;
	}

private:
	T* mData;
	int mMaxSize;
	int mDataSize;
	int mHead;
	int mTail;
};
