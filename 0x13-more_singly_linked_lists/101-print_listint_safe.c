#include "lists.h"
#include <stdbool.h>
/**
*print_listint_safe - Function that prints a listint_t linked list.
*@head: Head Pointer.
*
*Return: Number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast, *current;
	bool has_loop = false;

	slow = fast = head;

	if (head == NULL)
		exit(98);

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			has_loop = true;
			break;
		}
	}

	current = head;

	while (current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;

		if (has_loop && (current == slow))
		{
			printf("%d\n", current->n);
			break;
		}
	}
	return (count);
}
