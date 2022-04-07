#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *mal;

	mal = (unsigned int *)malloc(sizeof(unsigned int) * b);

	if (mal == NULL)
	{
		return (98);
	}
}
