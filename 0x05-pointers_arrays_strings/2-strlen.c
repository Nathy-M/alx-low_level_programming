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
	char name;

	name = s;
	str_len = strlen(name);
	return (str_len);
}
