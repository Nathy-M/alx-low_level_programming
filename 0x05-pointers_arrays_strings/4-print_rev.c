#include "main.h"
#include <string.h>
/**
 * print_rev - prints string in reverse direction
 * @s: passed string
 */
void print_rev(char *s)
{
	int count;

	for (count = *s.length() - 1; count > 0; count--)
	{
		_putchar(count);
	}
	_putchar('\n');
}
