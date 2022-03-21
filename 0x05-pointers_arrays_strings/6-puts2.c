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
		str++;
	}
	for (count = 0; count < num; count += 2)
	{
		_putchar(count);
	}
	_putchar('\n');
}
