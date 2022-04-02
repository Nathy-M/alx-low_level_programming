#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - main function
 * @argc: size of the argv array
 * @argv: an array of size argc
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (!(isdigit(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
