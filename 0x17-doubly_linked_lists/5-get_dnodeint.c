#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of adlistint_t list
 * @head: A pointer to a list
 * @index: Index point to return node
 *
 *Return: Node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
