#include "main.h"
/**
 * print_sign - return 1 and prints + if n is greater than zero
 *                          return 0 and prints 0 if n is zero
 *                          returns -1 and prints - if n is lessthan zero
 * @n:number to be checked
 * Return:returns 0 for success  
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
