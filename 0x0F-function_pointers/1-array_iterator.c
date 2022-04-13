#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * each element of array
 * @array: an array pointer that returns an int
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		*action(array[i]);
	}
}
