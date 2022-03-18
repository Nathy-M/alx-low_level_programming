#include "main.h"
/**
 * print_square - prints square by using #
 *@size - size of square
 *
 * Return: returns square
 */
void print_square(int size)
{
	int len;
	int wid;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (len = 1; len <= size; len++)
		{
			for (wid = 1; wid <= size; wid++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
