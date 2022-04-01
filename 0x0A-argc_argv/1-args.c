#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: an array containing the program command line argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
 }
