#include "lists.h"

/**
 *delete_nodeint_at_index - Function that deletes the node at index
 *@head: Pointer to the head of a list
 *@index: Index point that would be deleted
 *
 *Return: On success (1), on failure (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head, *nextnode;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		while (i++ < index - 1)
		{
			temp = temp->next;
			if (temp == NULL || temp->next == NULL)
				return (-1);
		}

		nextnode = temp->next;
		temp->next = nextnode->next;
		free(nextnode);
	}
	return (1);
}
