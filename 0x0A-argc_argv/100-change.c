#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: array size for argv.
 * @argv: array of argc
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int cents;
	int c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[argc]);

	if (cents < 0)
	{
		printf("%d\n", 0);
	}

	if (cents % 25 >= 0)
	{
		c += cents / 25;
		cents = cents % 25;
	}
	if (cents % 10 >= 0)
	{
		c += cents / 25;
		cents = cents % 10;
	}
	if (cents % 5 >= 0)
	{
		c += cents / 25;
		cents = cents % 5;
	}
	if (cents % 2 >= 0)
	{
		c += cents / 2;
		cents = cents % 2;
	}
	if (cents % 1 >= 0)
	{
		c += cents / 1;
	}
	printf("%d\n", c);
	return (0);
}
