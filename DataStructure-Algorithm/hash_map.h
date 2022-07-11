#pragma once
#include <string>
#include <list>
// ***** hash_map *****
// same as unordered_map

#define MAX_TABLE_SIZE 8191
template <typename T>
class hash_map
{
public:
	int hash(char* value, int len)
	{
		int key = 0;
		for (int i = 0; i < len; i++)
		{
			key += value[i];
		}
		return key % MAX_TABLE_SIZE;
	}

	int hash(std::string value)
	{
		int key = 0;
		for (auto i : value)
		{
			key += i;
		}
		return key % MAX_TABLE_SIZE;
	}

	int hash(int value)
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