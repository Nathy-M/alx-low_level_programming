#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse direction
 * @s: passed string
 */
void print_rev(char *s)
{
	int count;
	int num;

	while (*s != '\0')
	{
		num = s++;
	}

	for (count = num - 1; count > 0; count--)
	{
		_putchar(count);
	}
	_putchar('\n');
}
