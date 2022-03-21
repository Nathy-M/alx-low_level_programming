#include "main.h"
/**
 * puts2 - function that prints every other character of string
 * starting with the first character
 * @str: argument
 */
void puts2(char *str)
{
	int num = 0;
	int count = 0;

	while (str[num++])
	{
		count++;
	}
	for (num = 0; num < count; num += 2)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
