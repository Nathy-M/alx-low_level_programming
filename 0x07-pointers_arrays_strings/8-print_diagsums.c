#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - calculates diagonal sums and prints the result.
 * @a: the matrix of integers.
 * @size: size of matrix.
 */
void print_diagsums(int *a, int size)
{
	int rcounter;
	int sum1 = 0;
	int sum2 = 0;

	for (rcounter = 0; rcounter < size; rcounter++)
	{
		sum1 += a[rcounter];
		a += size;
	}
	a -= size;
	for (rcounter = 0; rcounter < size; rcounter++)
	{
		sum2 += a[rcounter];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
