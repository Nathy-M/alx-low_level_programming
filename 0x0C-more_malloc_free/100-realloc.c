#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates memory using malloc and free
 * @ptr: pointer to the memory allocated with old_size.
 * @old_size: size for ptr
 * @new_size: new size for the new memory block
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ralloc;
	unsigned int i;
	char *ptr_cpy, *new;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ralloc = malloc(new_size);

		if (ralloc == NULL)
		{
			return (NULL);
		}
		return (ralloc);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_cpy = ptr;
	ralloc = malloc(sizeof(*ptr_cpy) * new_size);
	if (ralloc == NULL)
	{
		free(ptr);
		return (NULL);
	}
	new = ralloc;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		new[i] = *ptr_cpy++;
	}
	free(ptr);
	return (ralloc);
}
