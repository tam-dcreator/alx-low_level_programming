#include "lists.h"

/**
 *pop_listint - Function that deletes the head node and returns the data
 *@head: Pointer to head node
 *
 *Return: Int (data from head node)
 */
int pop_listint(listint_t **head)
{
	int data;
	static listint_t *temp;


	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
