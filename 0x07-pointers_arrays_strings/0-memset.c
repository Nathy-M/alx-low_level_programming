#include "main.h"
/**
 * _memset - function that fills the first n bytes of memory
 * area pointed to by s with the character b
 * @s: memory area
 * @b: character to be filled
 * @n: number of integers to be filled
 *
 * Return: returns a pointer to the memory space
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
