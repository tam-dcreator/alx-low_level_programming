#include "lists.h"

/**
 *sum_listint - Function that returns the sum of all the data in a linked list
 *@head: Pointer to the head of the list
 *
 *Return: Sum of the data in the list
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
