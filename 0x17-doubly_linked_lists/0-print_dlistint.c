#include "lists.h"

/**
 * print_dlistint - Funtion that prints all te elements of a dlistint_t list
 * @h: Pointer to the list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
