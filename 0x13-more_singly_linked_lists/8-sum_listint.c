#include "lists.h"
/**
 * sum_listint - function that returns the sum of all of the data
 * @head: the pointer to head
 *
 * Return: if the list is empty return 0 sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	node = head;
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
