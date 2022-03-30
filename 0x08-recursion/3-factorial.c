#include "main.h"

/**
 * factorial - function that returns factoral of a given number
 * @n: number it's factorial to be computed
 *
 * Return: returns the factorial of a number
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
