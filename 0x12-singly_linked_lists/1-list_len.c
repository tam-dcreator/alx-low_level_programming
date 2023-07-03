#include "lists.h"
/**
*list_len - Function that returns the number of elements in a linked list_t.
*@h: Head pointer
*
*Return: Number of elements in a linked list
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
