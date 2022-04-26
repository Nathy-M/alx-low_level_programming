#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: double pointer to the head
 * @idx: index of the list where the new node should be added.
 * @n: value to be added
 *
 * Return: the address of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *nn = *head;
	unsigned int count;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;

	if (idx == 0)
	{
		node->next = nn;
		*head = node;
		return (node);
	}
	for (count = 0; count < (idx - 1); count++)
	{
		if (nn == NULL || nn->next == NULL)
			return (NULL);
		nn = nn->next;
	}
	node->next = nn->next;
	nn->next = node;

	return (node);
}

