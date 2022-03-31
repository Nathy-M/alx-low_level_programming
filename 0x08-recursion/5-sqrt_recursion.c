#include "main.h"

int _sqrt(int low, int high, int n);
int _sqrt_recursion(int n);

/**
 * _sqrt - calculates square root of the number.
 * @low: lowest range that a square root value starts
 * @high: highest range
 * @n: number to be computed
 *
 * Return: returns square root of a number.
 */

int _sqrt( int low, int high, int n)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;

		if ((mid * mid <= n) && ((mid + 1) * (mid + 1) > n))
		{
			return (mid);
		}
		else if (mid *mid < n)
		{
			return (_sqrt(mid + 1, high, n));
		}
		else
		{
			return (_sqrt(low, mid - 1, n));
		}
	}
	return (low);
}

/**
 * _sqrt_recursion - function that returns the natural square root of
 * a number.
 * @n: number to be computed
 *
 * Return: returns -1 if n is less than 0.
 *         returns 0 if n is equal to 0.
 *         returns square root of n for number different from the above one.
 */

int _sqrt_recursion(int n)
{
	int low = 0;
	int high = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}

	return (_sqrt(low, high, n));
}
