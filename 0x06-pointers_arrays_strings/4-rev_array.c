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

	for (num = n - 1; num >= 0; num++)
	{
		_putchar(a[num]);
		_putchar(',');
		_putchar(' ');
	}

