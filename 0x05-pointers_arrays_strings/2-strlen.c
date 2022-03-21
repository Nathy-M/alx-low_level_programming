#include "main.h"
#include <string.h>
/**
 * _strlen - returns length of string
 * @s: a charcter argument
 * Return: returns string length
 */
int _strlen(char *s)
{
	int str_len = 0;

	while (*s != '\0')
	{
		str_len++;
		*s++;
	}

	return (str_len);
}
