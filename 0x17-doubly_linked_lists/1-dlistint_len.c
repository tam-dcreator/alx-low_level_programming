#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements in a linked list
 * @h: Integer
 *
 * Return: Number of elements in list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
