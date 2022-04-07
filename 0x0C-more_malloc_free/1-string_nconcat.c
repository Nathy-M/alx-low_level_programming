#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: string byte to  be copied from s2
 *
 * Return: returns a pointer to a newly allocated space in memory.
 * If the function fails, it will return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_nconcat;
	unsigned int dest_len, count, i;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
	}

	dest_len = strlen(s1) + n + 1;

	str_nconcat = malloc(sizeof(char) * dest_len);

	if (str_nconcat == NULL)
	{
		return (NULL);
	}

	i = 0;

	for (count = 0; s1[count]; count++)
	{
		str_nconcat[i++] = s1[count];
	}

	for (count = 0; count < n && s2[count]; count++)
	{
		str_nconcat[i++] = s2[count];
	}
	str_nconcat[i] = '\0';

	return (str_nconcat);
}
