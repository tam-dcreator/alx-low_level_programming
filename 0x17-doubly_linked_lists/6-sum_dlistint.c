#include "lists.h"

/**
 *sum_dlistint - Function that returns the sum of all data of a linked list
 *@head: Pointer to the head of the list
 *
 *Return: Sum of data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
