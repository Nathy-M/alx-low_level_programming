#include "lists.h"
/**
 * print_listint - a function that prints all
 * elements of a listint_t
 * @h: pointer to the node
 *
 * Return: the total number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes = num_nodes + 1;
		printf("%d", h->n);
		h = h->next;
	}

	return (num_nodes);
}
