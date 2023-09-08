#include "hash_tables.h"

/**
*hash_table_create - Function that creates a hash table
*@size: The size of the array
*
*Return: Pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array = NULL;

	array = malloc(sizeof(hash_table_t) * size);
	if (array == NULL)
	{
		fprintf(stderr, "Malloc Failed in hash_table_create.\n");
		return (NULL);
	}
	return (array);
}
