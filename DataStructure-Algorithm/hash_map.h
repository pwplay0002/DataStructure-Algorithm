#pragma once

// ***** hash_map *****
// same as unordered_map

#define MAX_TABLE_SIZE 8191
template <typename T>
class hash_map
{
public:
	int hash(T value)
	{
		return value % MAX_TABLE_SIZE;
	}

	void insert(T value)
	{

	}

private:
	T _table[MAX_TABLE_SIZE];
	int count = 0;
};