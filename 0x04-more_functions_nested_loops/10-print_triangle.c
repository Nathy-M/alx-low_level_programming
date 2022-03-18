#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: returns 0
 */
void print_triangle(int size)
{
	int height;
	int length;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (length = size - 1; length > 0; length--)
			{
				_putchar(' ');
			}
			for (i = 1; i <= height; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
