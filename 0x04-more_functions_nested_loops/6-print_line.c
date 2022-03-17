#include "main.h"
/**
 * print_line - prints an '_' character depending
 * on the value of n
 * @n: number of times '_' is printed
 */
void print_line(int n)
{
	int num;
	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
