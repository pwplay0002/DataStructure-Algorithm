#pragma once
#include <string>
// ***** hash_map *****
// same as unordered_map
// if key already exists, ignored without inserting it.

#define MAX_TABLE_SIZE 8191
template <typename T>
class hash_map
{
public:
	hash_map() : _bucket_count(0), _count(0) {}

	int hash(T value)
	{
		return value % MAX_TABLE_SIZE;
	}

	void insert(T value)
	{
		int key = hash(value);
		if (_bucket[key] == NULL)
		{
			_bucket[key] = value;
			_bucket_count++;
		}
	}

	void erase(T value)
	{
		_bucket[hash(value)] = NULL;
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
	T _bucket[MAX_TABLE_SIZE];
	int _bucket_count = 0;
	int _count = 0;
};


#include "hash_map.inl"