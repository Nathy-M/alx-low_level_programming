#include <stdlib.h>
#include <stdio.h>
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
		if ((argv[i] >= 65 && argv[i] <= 90) || (argv[i] >= 97 && argv[i] <= 122))
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
