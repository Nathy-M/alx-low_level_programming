#include "lists.h"

/**
 * add_nodeint - function that add node at the beginning of the a list
 * @head: first node
 * @n: value to be added
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
