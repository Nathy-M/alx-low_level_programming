#include "lists.h"

/**
 * add_nodeint_end - function that add a new node at the end of a listint_t list
 * @head: first node/ the first address
 * @n: value to be added to the end of a listint_t node
 *
 * Return: the address of the new element
 * or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (new_node != NULL)
	{
		new_node = new_node->next;
	}
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
