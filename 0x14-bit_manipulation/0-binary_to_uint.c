#include "main.h"
#include <string.h>
#include <math.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 or 1 chars
 *
 * Return: converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int str_len;
	unsigned int i;

	str_len = strlen(b);

	for (i = 0; i < str_len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		sum = sum + (b[i] * pow(2, i));
	}
	return (sum);
}
