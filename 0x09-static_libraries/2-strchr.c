#include "main.h"
/**
 * _strchr - function that searches the first occurence of the character
 * in the string pointed to by the argument c
 * @s: character to be searched
 * @c: character to be searched in the string s
 *
 * Return: returns pointer to the first occurence of a charcter c
 * in the string s
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; count <= '\0'; count++)
	{
		if (s[count] == c)	
		{														return (s + count);
		}

		else
			return ('\0');											}
			
	return (s);
}
