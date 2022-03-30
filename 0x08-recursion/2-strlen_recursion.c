#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - function that returns length of string.
 * @s: string for which the length is computed.
 *
 * Return: returns length of string.
 */

int _strlen_recursion(char *s)
{
	int str_len;

	if (*s != '\0')
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
