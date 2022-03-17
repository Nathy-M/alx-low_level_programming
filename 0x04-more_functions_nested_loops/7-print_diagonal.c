#include "main.h"
/**
 * print_diagonal - prints \ in diagonal
 * @n: passing number of times to be printed
 */
void print_diagonal(int n)
{
	int num;
	int count;

	if (n > 0)
	{

	for (num = 0; num < n; num++)
	{
		for (count = 0; count < num; count++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}

	_putchar('\n');

	}

	_putchar('\n');
}
