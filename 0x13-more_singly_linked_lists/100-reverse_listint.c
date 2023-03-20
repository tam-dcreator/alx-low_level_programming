#include "lists.h"

/**
 *reverse_listint - Function that reverses a listint_t linked list
 *@head: Pointer to head of the list
 *
 *Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = 0, *nextnode = *head;

	while (nextnode != 0)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = (*head);
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
