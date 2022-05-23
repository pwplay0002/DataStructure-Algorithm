#include <iostream>

#define MAX_STACK_SIZE 10000
// ※ 기존 stl stack 에서 pop함수는 리턴형이 void이다.
template <typename T>
class stack
{
public:
	stack() : mTop(-1) {}

	void push(T value)
	{
		mData[++mTop] = value;
	}
	T pop()
	{
		if (empty()) return -1;
		return mData[mTop--];
	}
	T top()
	{
		if (empty()) return -1;
		return mData[mTop];
	}
	int size()
	{
		return mTop + 1;
	}
	bool empty()
	{
		return (mTop < 0);
	}
private:
	T mData[MAX_STACK_SIZE];
	int mTop;
};