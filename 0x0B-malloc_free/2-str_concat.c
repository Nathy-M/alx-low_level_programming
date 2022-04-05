#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenate two strings.
 * @s1: the first string
 * @s2: the second string.
 *
 * Return: returns NULL on failure
 * or else returns pointer to a newly allocated space in memory.
 */

char *str_concat(char *s1, char *s2)
{
	int str_len1;
	int str_len2;
	int i;
	int j = 0;
	char *str_con;

	str_len1 = strlen(s1);
	str_len2 = strlen(s1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (str_len1 > str_len2)
	{
		str_con = malloc(str_len1 * sizeof(char));
	}
	else
	{
		str_con = malloc(str_len2 * sizeof(char));
	}
	if (str_con == NULL)
	{
		return (NULL):
	}
	for (i = 0; s1[i]; i++)
	{
		str_con[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		str_con[j++] = s2[i];
	}
	str_con[j] = '\0';
	return (str_con);
}
