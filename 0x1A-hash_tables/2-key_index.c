#include "hash_tables.h"

/**
*key_index - Function that gives you the index of a key.
*
*@key: The key
*@size: Size of the array of the hash table
*
*Return: The index at which the key/value pair should be stored in the array.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
/*Call the hash function passing the key, get the key index finding the*/
/*mod of the size and the return value of the hash function*/

	return (hash_djb2(key) % size);
}
