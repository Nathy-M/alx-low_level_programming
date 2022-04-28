#include "main.h"
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
	unsigned int power;

	if (b == '\0')
		return(0);

	for (str_len = 0; b[str_len];)
	{
	str_len++;
	}	

	for (i = str_len - 1; i > 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		power = pow(2, i);
		sum = sum + ((b[i] - '0') * power);
	}
	return (sum);
}
