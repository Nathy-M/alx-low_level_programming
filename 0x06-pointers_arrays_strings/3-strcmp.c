#include "main.h"
#include <string.h>
/**
 * _strcmp - compares n bytes of the string strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: an integer value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
