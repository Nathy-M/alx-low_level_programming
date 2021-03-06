#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t
 * @head: head double pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
}
