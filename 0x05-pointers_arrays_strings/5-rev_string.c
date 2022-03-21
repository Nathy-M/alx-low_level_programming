#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: passed string
 */
void rev_string(char *s)
{

	while (*s != '\0')
	{
		strrev(s);
		s++;
	}

}
