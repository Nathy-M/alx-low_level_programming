#include "lists.h"

/**
 * free_listint - function that free a list_int list
 * @head: the first node
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;

	if (head == NULL)
		return;
	new_node = head;

	while (new_node != NULL)
	{
		new_node = new_node->next;
		free(new_node);
	}
}
