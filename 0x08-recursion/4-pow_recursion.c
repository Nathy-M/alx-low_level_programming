#include "main.c"
#include <stdlib.h>

/**
 * _pow_recursion - function that calculates the value of
 * x raised to the power of y.
 * @x: a number it's power being calculated
 * @y: a power of x
 *
 * Return: returns -1, if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
