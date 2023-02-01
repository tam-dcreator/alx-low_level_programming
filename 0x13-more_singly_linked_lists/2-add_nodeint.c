#include "lists.h"

/**
 *add_nodeint - Function that adds a node at the beginning of a list
 *@head: Head pointer
 *@n: Integer value for list
 *
 *Return: Address of new element orr NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
