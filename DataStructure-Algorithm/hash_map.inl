//#include "hash_map.h"

template<>
__inline int hash_map<char*>::hash(char* value)
{
	unsigned int key = 0;
	int count = 0;
	while (value[count++] != NULL)
	{
		key += value[count];
	}
	return key % MAX_BUCKET_SIZE;
}

template<> 
__inline int hash_map<std::string>::hash(std::string value)
{
	unsigned int key = 0;
	for (auto i : value)
	{
		key += i;
	}
	return key % MAX_BUCKET_SIZE;
}