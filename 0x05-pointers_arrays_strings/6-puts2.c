#include "main.h"
/**
 * puts2 - function that prints every other character of string
 * starting with the first character
 * @str: argument
 */
void puts2(char *str)
{
	int num = 0;
	int count;

	while (*str != '\0')
	{
		num++;
		s++;
	}
	for (count = 0; count <= num; count++)
	{
		if (count % 2 == 0)
		{
			_putchar(count);
		}
	}
	_putchar('\n');
}
