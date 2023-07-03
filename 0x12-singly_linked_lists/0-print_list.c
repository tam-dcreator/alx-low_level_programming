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
	const list_t *head = h;

	while (head)
	{
		count++;
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
	}

	return (count);
}
