#include "main.h"
/**
 * create_array - function that creates an array of chars and initialize it with
 * specific char.
 * @size: size of an array.
 * @c: character argument.
 *
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int s;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (s = 0; s < size; s++)
	{
		a[s] = c;
	}
	return (a);
}
