#include <stdlib.h>
#include <stdio.h>
/**
 * main - the main function
 * @argc: size of the argv array
 * @argv: an array of size argc
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		ele
		{
			for (i = 1; i < argc; i++)
			{
				mul *= atoi(argv[i]);
			}
			printf("%d\n", mul);
		}
		return (0);
}	
