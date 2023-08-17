#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning of list
 * @head: List Pointer
 * @n: Integer to add to list
 *
 *Return: Address of new list or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(newnode));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = 0;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}

	return (*head);
}
