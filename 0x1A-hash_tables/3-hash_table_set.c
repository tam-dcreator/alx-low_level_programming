#include "hash_tables.h"

/**
*hash_table_set - Function that adds an element to the hash table
*
*@ht: Pointer to the hash table
*@key: The key
*@value: The value associated with the key
*
*Return: On success (1), on error (0)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

/*Allocate memory for key and value strings*/
	newnode->key = malloc(strlen(key) + 1); /* +1 for the null terminator*/
	newnode->value = malloc(strlen(value) + 1); /* +1 for the null*/

	if (newnode->key == NULL || newnode->value == NULL)
	{
		free_item(newnode);
		return (0);
	}

	strcpy(newnode->key, key);
	strcpy(newnode->value, value);
	newnode->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = newnode;
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			strcpy(ht->array[index]->value, value);
		else
		{
			newnode->next = ht->array[index];
			ht->array[index] = newnode;
		}
	}
	return (1);
}

/**
*free_item - Function that frees a hash_node_t node
*@node: Node to be freed
*
*/
void free_item(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
