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
	listint_t *new_node, *tmp_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp_node = *head;

		while (tmp_node->next != NULL)
		{
			tmp_node = tmp_node->next;
		}

		tmp_node->next = new_node;
	}

	return (new_node);
}
