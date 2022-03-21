#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: passed string
 */
void rev_string(char *s)
{
	int count;
	int num;

	while (*s != '\0')
	{
		num++;
		s++;
	}

	for (count = num; count >= 0; count++)
	{
		strrev(s);
	}
}
