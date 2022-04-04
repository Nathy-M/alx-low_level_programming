#include "main.h"
/**
 *_memcpy - function used to copy a block of data from a source address
 * to a destination address
 * @dest: destination character pointer
 * @src: source character pointer
 * @n: number of characters to be copied
 *
 * Return: returns pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
