#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string
 * @dest: pointer to the destination array where the content is to be copied
 * @src: string to be copied
 * @n: number of character to be copied from the source
 * Return: pointer to the destination array
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
