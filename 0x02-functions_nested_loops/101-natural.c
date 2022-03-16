#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: returns 0
 */
int main(void)
{
	int num1;
	int sum = 0;

	for (num1 = 1; num1 < 1024; num1++)
	{
		if ((num1 % 3 == 0) || (num1 % 5 == 0))
		{
			sum += num1;
		}
	}

printf("Sum of the numbers %d is: %d", num1, sum);
return (0);
}


