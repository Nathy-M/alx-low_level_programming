#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - function that returns a pointer to a two
 * dimensional array of integers.
 * @width: column of the two-dimensional array.
 * @height: row of the two-dimensional array.
 *
 * Return: If width or height is 0 or negative, return NULL
 *         The function will return NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **two_dim;
	int row, column;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	two_dim = malloc(sizeof(int *) * height);

	if (two_dim == NULL)
	{
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		two_dim[row] = malloc(sizeof(int) * width);
	}

	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			two_dim[row][column] = 0;
		}
	}

	return (two_dim);
}
