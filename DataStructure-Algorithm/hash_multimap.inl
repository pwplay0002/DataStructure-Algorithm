#include "hash_multimap.h"

template<>
__inline int hash_multimap<char*>::hash(char* value)
{
	int key = 0;
	int count = 0;
	while (value[count++] != NULL)
	{
		key += value[count];
	}
	return key % MAX_BUCKET_SIZE;
}

template<>
__inline int hash_multimap<std::string>::hash(std::string value)
{
	int key = 0;
	for (auto i : value)
	{
		key += i;
	}
	return key % MAX_BUCKET_SIZE;
}