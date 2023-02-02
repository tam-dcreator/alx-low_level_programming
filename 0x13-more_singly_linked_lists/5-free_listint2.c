#include "lists.h"

/**
 *free_listint2 - Function that frees a list
 *@head: Head Pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
