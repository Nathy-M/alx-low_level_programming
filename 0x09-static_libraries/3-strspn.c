#include "main.h"
/**
 * _strspn - function that calculates the length (in bytes) of the initial segment s
 * which consists entirely of bytes in accept
 * @s: the character to be scanned
 * @accept: character to be checked with s
 *
 * Return: returns the number of bytes in the initial segment s which consists of only bytes 
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
			{
				bytes++;
				break;
			}

			else if (accept[count + 1] == '\0')
				return (bytes);
			s++;
		}
	}
	return (bytes);
}
