#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: returns 0
 */
int main(void)
{
	int num1 = 0;
	int num2 = 1;
	int num3;
	int nextTerm;

	nextTerm = num1 + num2;

	for (num3 = 0; num3 < 50; num3++)
	{
		printf("%d, ", nextTerm);

		num1 = num2;
		num2 = nextTerm;

		if (num3 == 49)
			printf("\n");
		else
			printf(", ");
	}
	return 0;
}
