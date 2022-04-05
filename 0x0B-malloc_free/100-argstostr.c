#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - function that concatenates all the arguments
 * @ac: the first argument.
 * @av: the second argument.
 *
 * Return: returns a pointer to a new string
 *         or NULL if fails.
 */

char *argstostr(int ac, char **av)
{
	char *args;
	int i, j, arg, count;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			count++;
		}
	}

	args = malloc(sizeof(char) * (count + 1));

	if (args == NULL)
	{
		return (NULL);
	}
	arg = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args[arg++] = av[i][j];
		}
		args[arg++] = '\n';
	}
	args[count] = '\0';

	return (args);
}
