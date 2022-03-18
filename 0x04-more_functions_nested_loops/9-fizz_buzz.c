#include <stdio.h>
/**
 * main - print from 1 to 100
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzNuzz \t");
		else if ((num % 3) == 0)
			printf("Fizz \t");
		else if ((num % 5) == 0)
			printf("Buzz \t");
		else
			printf("%d ", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
