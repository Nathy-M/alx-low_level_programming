#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: size of the argv array
 * @argv: an array of size argc
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	unsigned int i;
	unsigned int sum = 0;
	unsigned int num;

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		if (!(isdigit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num = atoi(argv[i]);
			sum += num;
		}
	}
	}
		printf ("%d\n", sum);
		return (0);
}
