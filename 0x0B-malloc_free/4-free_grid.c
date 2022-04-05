#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid that is
 * created in privious question #3.
 * @grid: double pointer to integer
 * @height: height of the two-dimensional array
 */

void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}
	free(gird);
}
