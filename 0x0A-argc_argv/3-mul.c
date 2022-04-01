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
	int mul;
	int i;

		if (argc < 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			for (i = 1; i < argc; i++)
			{
				mul = argv[i] * argv[i + 1];
			}
			printf("%d\n", mul);
		}
		return (0);
}	
