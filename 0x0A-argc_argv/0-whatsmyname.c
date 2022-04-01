#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints program name.
 * @argc: represent number of the command line entered while running the program
 * @argv: an array of pointers to the strings.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
