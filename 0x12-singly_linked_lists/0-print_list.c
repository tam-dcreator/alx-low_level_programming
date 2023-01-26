#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 *print_list - Function that prints the elements of a list
 *@h: String
 *
 *Return: Size of nodes or null.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	while (temp)
	{
		if (temp->str)
			printf("[%d] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}

	return (count);
}
