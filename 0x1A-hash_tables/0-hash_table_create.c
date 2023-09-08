#include "hash_tables.h"

/**
*hash_table_create - Function that creates a hash table
*@size: The size of the array
*
*Return: Pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array_ptr = NULL;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array_ptr = malloc(sizeof(hash_table_t));

	if (array_ptr == NULL)
	{
		fprintf(stderr, "Malloc Failed in hash_table_create.\n");
		return (NULL);
	}

	array_ptr->array = malloc(sizeof(hash_node_t) * size);

	if (array_ptr->array == NULL)
	{
		free(array_ptr);
		return (NULL);
	}
	array_ptr->size = size;

	for (index = 0; index < size; index++)
		array_ptr->array[index] = NULL;

	return (array_ptr);
}
