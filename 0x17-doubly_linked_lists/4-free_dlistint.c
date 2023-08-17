#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list
 * @head: A pointer to a list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
