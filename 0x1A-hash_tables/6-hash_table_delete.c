#include "hash_tables.h"

/**
 *hash_table_delete - delete a hash table
 *
 *@ht: hash table to delete
 *
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *next;
	unsigned long int index;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			next = temp->next;
			free_item(temp);
			temp = next;
		}
	}
	free(ht->array);
	free(ht);
}
