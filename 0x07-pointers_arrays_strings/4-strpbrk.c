#include "main.h"
/**
 * _strpbrk - function that locates the first occurence in the string s
 * of any of the bytes in the string accept.
 * @s: string to be scanned
 * @accept: string to be checked for
 *
 * Return: a pointer to the byte in s that matched one of the bytes in accept
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s != '\0')
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
				return (s);
		}
		s++;
	}
	return ('\0');
}
