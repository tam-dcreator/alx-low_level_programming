#include "lists.h"

/**
 *free_list - Function that frees a list
 *@head: Pointer to list
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
