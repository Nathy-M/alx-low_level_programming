#include "main.h"
/**
 * times_table - function to print the times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int num1;
	int num2;
	int prod;

	for (num1 = 0; num1 <= 9; num1++)
	{
		-putchar('0');

		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');
			mult = num1 * num2;

			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
