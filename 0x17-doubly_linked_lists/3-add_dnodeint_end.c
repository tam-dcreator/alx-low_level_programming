#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the beginning of list
 * @head: List Pointer
 * @n: Integer to add to list
 *
 *Return: Address of new list or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	static dlistint_t *temp;

	newnode = malloc(sizeof(newnode));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = 0;

	if (*head == NULL)
	{
		*head = temp = newnode;
		(*head)->prev = 0;
	}
	else
	{
		newnode->prev = temp;
		temp->next = newnode;
		temp = newnode;
	}

	return (*head);
}
