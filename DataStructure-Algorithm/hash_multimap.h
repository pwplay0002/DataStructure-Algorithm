#pragma once
#include <string>
#include <list>
// ***** hash_multimap *****
// same as unordered_multimap

#define MAX_BUCKET_SIZE 8191
template <typename T>
class hash_multimap
{
public:
	hash_multimap() : _bucket_count(0), _count(0) {}

	int hash(T value)
	{
		return value % MAX_BUCKET_SIZE;
	}

	void insert(T value)
	{
		int key = hash(value);
		_bucket[key].push_back(value);
		_bucket_count++;

		//if (_bucket[key] != NULL)
		//{
		//	//_bucket[key] = value;
		//}
	}

	void erase(T value)
	{
		_bucket[hash(value)].pop_front();
		_bucket_count--;
	}

	T find(int key)
	{
		return _bucket[key];
	}

	int bucket_count()
	{
		return _bucket_count;
	}

private:
	std::list<T> _bucket[MAX_BUCKET_SIZE];
	int _bucket_count = 0;
	int _count = 0;
};

#include "hash_multimap.inl"