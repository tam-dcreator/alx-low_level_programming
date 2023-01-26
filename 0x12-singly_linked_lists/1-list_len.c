#include "lists.h"

/**
 *list_len - FUnction that returns the number of elements in a linked list
 *@h: String
 *
 *Return: Number of elements in list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
