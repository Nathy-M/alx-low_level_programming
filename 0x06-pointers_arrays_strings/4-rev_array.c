#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses an integer passed as parameters
 * @a: pointer
 * @n: an integer ro be reversed
 */
void reverse_array(int *a, int n)
{
	int num;
	int tmp;

	for (num = n - 1; num >= 0; num++)
	{
		temp = a[n - 1 - num];
		a[n - 1 - num] = a[num];
		a[num] = tmp;
	}

