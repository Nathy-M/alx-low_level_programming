#include "lists.h"
/**
 * pop_listint - functoin that deletes the head node of a listint_t list
 * @head: head of the list
 *
 * Return: the head nodes data (n). If the list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int value;

	if (*head == NULL)
	{
		return (0);
	}
	node = *head;
	value = node->n;
	*head = node->next;
	free(node);

	return (node);
}
