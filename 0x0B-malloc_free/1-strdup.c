#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be checked for.
 *
 * Return: On success, the _strdup function returns a pointer
 * to the duplicated string Or returns NULL if insufficient
 * memory was available
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int n = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		n++;
		str++;
	}

	s = malloc((n + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		s[i] = str[i];
		_putchar(str[i]);
	}

	s[n] = '\0';

	return (s);

}
