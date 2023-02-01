#include "lists.h"

/**
 *print_listint - Function that prints all the elements of a list
 *@h: Pointer to head pointer
 *
 *Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
