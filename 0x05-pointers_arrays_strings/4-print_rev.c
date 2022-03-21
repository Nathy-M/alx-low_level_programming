#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse direction
 * @s: passed string
 */
void print_rev(char *s)
{
	int count;
	int num = 0;

	while (s[count++])
	{
		num++;
	}

	for (count = num - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
