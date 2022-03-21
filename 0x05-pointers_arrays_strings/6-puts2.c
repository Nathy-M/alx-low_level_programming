#include "main.h"
/**
 * puts2 - function that prints every other character of string
 * starting with the first character
 * @str: argument
 */
void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
