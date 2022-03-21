#include "main.h"
/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer integer
 * @n: parametr
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		printf(", ");
	}
	printf("\n");
}
