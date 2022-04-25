#include "lists.h"

/**
 * listint_len - function that return the number of elemnts in a linked list
 * @h: pointer
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes = num_nodes + 1;
		h = h->next ;
	}
	return (num_nodes);
}
