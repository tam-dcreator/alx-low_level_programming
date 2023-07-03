#include "lists.h"
/**
*print_list - Function that prints all the elements of a list_t list.
*@h: Head pointer
*
*Return: Number of nodes or zero.
*/
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *head = h;

	while (head)
	{
		count++;
		if (head->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
	}

	return (count);
}
