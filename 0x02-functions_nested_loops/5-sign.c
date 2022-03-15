#include "main.h"
/**
 * int print_sign(int n) -- return 1 and prints + if n is greater than zero
 *                          return 0 and prints 0 if n is zero
 *                          returns -1 and prints - if n is lessthan zero
 *   
 */
int print_sign(int n)
{
	int num;
	
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
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
