#include "main.h"
/**
 * print_diagsums - calculates diagonal sums and prints the result.
 * @a: the matrix of integers.
 * @size: size of matrix.
 */
void print_diagsums(int *a, int size)
{
	int rcounter;
	int sum = 0;
	int sum1 = 0;

	for (rcounter = 0; rcounter < size; ++rcounter)
	{
		sum = sum + a[rcounter][rcounter];
		sum1 = sum1 + a[rcounter][size - rcounter - 1];
	}
	printf("%d, %d\n", sum, sum1);
}
