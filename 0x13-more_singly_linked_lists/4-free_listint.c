#include "lists.h"

/**
 * free_listint - function that free a list_int list
 * @head: the first node
 */

void free_listint(listint_t *head)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node = head;
	while (new_node != NULL)
	{
		free(listint_t);
		new_node = new_node->next;
	}
}
