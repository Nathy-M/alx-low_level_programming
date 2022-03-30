#include "main.h"
#include <stdlib.h>

/**
 * _print_rev_recursion - function that prints string in reverse order.
 *
 * @s: string to be printed in reverse order.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
