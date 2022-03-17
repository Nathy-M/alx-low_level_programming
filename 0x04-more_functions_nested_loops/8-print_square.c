#include "main.h"
/**
 * print_square - prints square by using #
 *@size - size of square
 *
 * Return: returns square
 */
void print_square(int size)
{
	int num;
	int num1;

	if (size > 0)
	{
		for (num = 0; num < size; num++)
		{
			for (num1 = 0; num1 < num; num1++)
			{
				_putchar('#');
			}
			if (num == size - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
