#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenate two strings
 * @dest: destination for the source stirng
 * @src: string to be appended
 * @n: maximum number of charater to be appended
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
