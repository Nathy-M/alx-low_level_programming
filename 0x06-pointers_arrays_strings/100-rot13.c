#include "main.h"
/**
 * rot13 - rotates every alphabet by 13
 * @str: string to be rotated
 * Return: returns pointer to str
 */
char *rot13(char *str)
{
	int num = 0;

	while (str[num])
	{
		for (str[num] = 'a'; str[num] <= 'z'; str[num]++)
		{
			str[num] += 13;
			if (str[num] >= 'A' && str[num] <= 'Z')
				str[num] += 13;
		}
		num++;
	}
	return (str);
}
