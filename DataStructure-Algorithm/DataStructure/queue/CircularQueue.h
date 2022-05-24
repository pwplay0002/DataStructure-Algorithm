#pragma once
#include <iostream>

// ***** Circular Queue *****

#define MAX_CIRCULAR_QUEUE_SIZE 10000

template <typename T>
class CircularQueue
{
public:
	// Default Constructor
	CircularQueue() : mHead(0), mTail(0), mMemSize(MAX_CIRCULAR_QUEUE_SIZE)
	{
		data = new T[mMemSize];
	}
	// Custom Constructor
	CircularQueue(int memSize) : mHead(0), mTail(0), mMemSize(memSize)
	{
		data = new T[memSize];
	}
	// Copy Constructor
	CircularQueue(const CircularQueue<T>& cq) : mHead(cq.mHead), mTail(cq.mTail), mMemSize(cq.mMemSize)
	{
		data = new T[mMemSize];
		for (int i = 0; i < cq.mMemSize; i++) 
			data[i] = cq.data[i];
	}
	// Move Constructor
	CircularQueue(CircularQueue<T>&& cq) : mHead(cq.mHead), mTail(cq.mTail), mMemSize(cq.mMemSize)
	{
		cq.mHead = 0;
		cq.mMemSize = 0;
		cq.mTail = 0;
		cq.data = nullptr;
	}
	// Destructor
	~CircularQueue()
	{
		delete[] data;
	}

	void push(T value)
	{
		// °¡µæ Âù °æ¿ì
		if ((mTail + 1) % mMemSize == mHead) return;

		data[mTail] = value;
		mTail = (mTail + 1) % MAX_CIRCULAR_QUEUE_SIZE;
	}

	T pop()
	{
		T temp;
		if (empty()) return -1;
		temp = data[mHead];
		mHead = (mHead + 1) % MAX_CIRCULAR_QUEUE_SIZE;
		return temp;
	}

	int size()
	{
		if (mTail < mHead) return ((mTail - 1) + (MAX_CIRCULAR_QUEUE_SIZE - mHead));
		else return mTail - mHead;
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

	void PrintQueue()
	{
		std::cout << "Queue : ";
		for (int i = mHead; i < mTail; i++)
		{
			std::cout << data[i] << ' ';
		}
		std::cout << '\n';
	}

	bool operator ==(const CircularQueue<T>& cq) const
	{
		if (mMemSize == cq.mMemSize && mHead == cq.mHead && mTail == cq.mTail)
		{
			for (int i = 0; i < size(); i++)
			{
				if (data[i] != cq.data[i])
					return false;
			}
			return true;
		}
		else return false;
	}

	bool operator !=(const CircularQueue<T>& cq) const
	{
		return !(*this == cq);
	}

public:
	int mHead;
	int mTail;
	int mMemSize;
	T* data;
};