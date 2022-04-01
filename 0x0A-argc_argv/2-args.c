#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main function
 * @argc: size of argv array
 * @argv: an array of size argc
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
