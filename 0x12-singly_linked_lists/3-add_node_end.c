#include "lists.h"

/**
 *add_node_end - Function that adds a new node at the end of a list
 *@head: List pointer
 *@str: String to add to list
 *
 *Return: List of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	static list_t *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		temp = newnode;
	}
	else
	{
		temp->next = newnode;
		temp = newnode;
	}
	return (*head);
}
