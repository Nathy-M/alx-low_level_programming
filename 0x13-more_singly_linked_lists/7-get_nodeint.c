#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: the head of the node
 * @index: index of the node starting at 0
 *
 * Return: if node does not exist return 0
 * else return the position of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = head;

	while (node != NULL && index)
	{
		node = node->next;
	}
	return (node);
}
