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

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
			num = atoi(argv[argc]);
			sum += num;
		}
	}
		printf ("%d\n", sum);
		return (0);
}
