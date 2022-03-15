#include "main.h"
/**
 * int print_last_digit(int) -- returns value of last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;
	
	if (last_digit < num % 10)
	{
		last_digit *= -1;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
		return (last_digit);
}
