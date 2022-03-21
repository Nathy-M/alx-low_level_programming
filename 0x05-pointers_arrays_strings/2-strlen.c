#include "main.h"
#include <string.h>
/**
 * _strlen - returns length of string
 * @s: a charcter argument
 * Return: returns string length
 */
int _strlen(const char *s)
{
	int str_len;
	
	while (*s != '\0')
		str_len++;
	return (str_len);
}
