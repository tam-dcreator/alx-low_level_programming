#include "lists.h"

/**
 *get_nodeint_at_index - Function that returns the nth node of a linked list
 *@head: Pointer to the head of the list
 *@index: Nth node thats returned
 *
 *Return: Nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i++ < index)
		temp = temp->next;

	return (temp);
}
