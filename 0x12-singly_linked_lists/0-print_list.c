#include "lists.h"
/**
*print_list - Function that prints all the elements of a list_t list.
*@h: Head pointer
*
*Return: Number of nodes or zero.
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		count++;
		temp = temp->next;
	}

	return (count);
}
