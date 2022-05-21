#pragma once

// ***** Circular Queue *****

#define MAX_CIRCULAR_QUEUE_SIZE 10000

template <typename T>
class CircularQueue
{
public:
	CircularQueue() : mHead(0), mTail(0) {}

	void push(T value)
	{
		// °¡µæ Âù °æ¿ì
		if ((mTail + 1) % MAX_CIRCULAR_QUEUE_SIZE == mHead) return;

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

private:
	int mHead;
	int mTail;
	T data[MAX_CIRCULAR_QUEUE_SIZE];
};