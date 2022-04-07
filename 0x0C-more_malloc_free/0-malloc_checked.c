#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: memory to be allocated
 *
 * Return: returns a pointer to an aloctaed memmory.
 * If malloc fails, the function terminates the process by status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(sizeof (unsigned int) * b);

	if (mal == NULL)
	{
		exit(98);
	}
	return (mal);
}
