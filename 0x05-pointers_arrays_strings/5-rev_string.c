#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: passed string
 */
void rev_string(char *s)
{
	int length;
	int count;
	char temp;

	while(s[length++])
		count++;

	for (length = count - 1; length >= count / 2; length--)
	{
		temp = s[length];
		s[length] = s[count - length - 1];
		s[count - length - 1] = temp;
       	}
}
