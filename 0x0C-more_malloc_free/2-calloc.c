#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array using malloc.
 * @nmemb: size of an array.
 * @size: sizeof the array data type.
 *
 * Return: the function returns a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;
	unsigned int num;

	if (nmemb < 0 || size < 0)
	{
		return (NULL);
	}
	cal = malloc(nmemb * size);

	if (cal == NULL)
	{
		return (NULL);
	}

	for (num = 0; num < nmemb * size; num++)
	{
		cal[num] = '\0';
	}
	return (cal);
}
