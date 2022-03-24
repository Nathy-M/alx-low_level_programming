#include "main.h"
/**
 * leet - Encodes a string to 1337
 * Sstr: string to be encoded
 * Return: a pointer to encoded string
 */
char *leet(char *str)
{
	int num = 0;
	int n;

	char leet[10] = {'O', 'L', 'T', 'E', 'A', 'o', 'l', 't', 'e', 'a'};

	while (str[num])
	{
		for (n = 0; n <= 9; n++)
		{
			if (str[num] == leet[n] || str[num] - 32 == leet[n])
			{
				str[num] = n + '0';
			}
		}
		num++;
	}
	return (str);
}
