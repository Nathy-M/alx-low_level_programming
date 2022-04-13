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

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
