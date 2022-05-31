#pragma once

#define MEMORY_POOL 4

template<typename T>
class deque
{
	// Default Constructor
	deque() : mMaxSize(mMaxSize), mDataSize(0), mHead(0), mTail(0), mMaxSize(MEMORY_POOL)
	{
		mData = new T[mMaxSize];
	}

	// Custom Constructor
	deque(int size) : mMaxSize(mMaxSize), mDataSize(0), mHead(0), mTail(0), mMaxSize(MEMORY_POOL)
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

	// Desturcotr
	~deque() { delete[] mDeque; }

	void push_back(T value)
	{
		
	}

private:
	T* mData;
	int mMaxSize;
	int mDataSize;
	int mHead;
	int mTail;
};