#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);

	if (mal == NULL)
	{
		exit(98);
	}
	return (mal);
}
