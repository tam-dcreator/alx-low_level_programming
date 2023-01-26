#include "lists.h"

/**
 *add_node - Function that adds a new node at the beginning of a list
 *@head: List pointer
 *@str: String to add to list
 *
 *Return: List of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (*head);
}
