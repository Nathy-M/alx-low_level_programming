#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - function that creates an array of integers
 * @min: the min integer
 * @max: the max integer
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int num, i;

	if (min > max)
	{
		return (NULL);
	}
	num = max + min - 1;
	arr = malloc(sizeof(int) * num);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < num; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
