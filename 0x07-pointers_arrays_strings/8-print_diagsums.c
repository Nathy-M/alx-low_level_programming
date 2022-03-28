#include "main.h"
/**
 * print_diagsums - calculates diagonal sums and prints the result.
 * @a: the matrix of integers.
 * @size: size of matrix.
 */
void print_diagsums(int *a, int size)
{
	int rcounter;
	int ccounter;
	int sum = 0;

	for (rcounter = 0; rcounter < size; rcounter++)
	{
		for (ccounter = 0; ccounter < size; ccounter++)
		{
			if (rcounter == ccounter)
			{
				sum += a[rcounter][ccounter];
			}
		}
	}
	printf("%d, \n", sum);
}
