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
	int count = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}

	return (count);
}
