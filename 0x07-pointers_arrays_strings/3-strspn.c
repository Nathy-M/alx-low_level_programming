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
	unsigned in count;
	unsigned int counter;

	for (count = 0; count <= accept[count]; count++)
	{
		if (*s == accept[count])
		{
			counter++;
		}
		else if (accept[count + 1] == '\0')
			return (counter);
	}
	return (counter);
}
