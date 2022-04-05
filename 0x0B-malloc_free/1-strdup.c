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
	strdup(str);
	return (str);
}
