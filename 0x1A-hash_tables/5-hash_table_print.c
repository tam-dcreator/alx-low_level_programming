#include "hash_tables.h"

/**
*hash_table_print - Funxtion that prints a hash table
*
*@ht: The hash table
*
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (flag)
				printf("'%s': '%s'", temp->key, temp->value);
			else
				printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			flag = 0;
		}
	}
	printf("}\n");
}
