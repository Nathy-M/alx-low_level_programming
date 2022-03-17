#include "main.h"
/**
 * print_numbers - prints number from 0 to 9
 *
 * Return: return numbers from 0 to 9
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
