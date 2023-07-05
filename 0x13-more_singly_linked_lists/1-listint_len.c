#include "lists.h"

/**
 *listint_len - Function that returns the number of elements in a list
 *@h: Pointer to head pointer
 *
 *
 *Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
