#include "main.h"
/**
 * puts2 - function that prints every other character of string
 * starting with the first character
 * @str: argument
 */
void puts2(char *str)
{
	int count;
	int num;

	while (*str != '\0')
	{
		num++;
		str++;
	}

	for (count = 0; count <= num; count++)
	{
		if (str % 2 == 0)
		{
			_putchar(str);
		}
	}
	_putchar('\n');
}
