#include "lists.h"

/**
 *insert_nodeint_at_index -Function that inserts a new node at a given position
 *@head: Pointer to the head of a list
 *@idx: Index where the node should be inserted
 *@n: Data to be added to the list
 *
 *Return: Address to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode, *temp = *head;

	newnode = malloc(sizeof(newnode));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		while (i++ < (idx - 1))
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}

		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
