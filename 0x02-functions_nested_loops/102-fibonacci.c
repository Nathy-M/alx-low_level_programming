#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int num1 = 0;
	unsigned int num2 = 1;
	int num3;
	unsigned int nextTerm;

	for (num3 = 0; num3 < 50; num3++)
	{
		nextTerm = num1 + num2;

		printf("%lo", nextTerm);

		num1 = num2;
		num2 = nextTerm;

		if (num3 == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
