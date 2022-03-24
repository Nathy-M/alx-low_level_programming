#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: a ppointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
