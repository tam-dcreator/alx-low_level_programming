#include "lists.h"

/**
 *add_nodeint_end - Function that adds a new node at the end of a list
 *@head: Head pointer
 *@n: Integer data
 *
 *Return: Address of elemet or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	static listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = temp = new_node;
	}
	else
	{
		temp->next = new_node;
		temp = new_node;
	}
	return (*head);
}
