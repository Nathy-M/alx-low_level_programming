#include "lists.h"

/**
 * free_listint - function that free a list_int list
 * @head: the first node
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (head == NULL)
		return;

	while (new_node != NULL)
	{
		new_node = head;
		new_node = new_node->next;
		free(new_node);
	}
}
