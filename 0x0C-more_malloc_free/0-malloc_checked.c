#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = (unsigned int *)malloc(sizeof(int) * b);

	if (mal == NULL)
	{
		return (98);
	}
}
