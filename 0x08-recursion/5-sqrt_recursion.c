#include "main.h"
#include <stdlib.h>
#include <math.h>
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
	int start = 1;
	int end = n;
	int ans;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	
	while (start <= end)
	{
		int mid = (start + (end - start) / 2);

		if (mid <= (n / mid))
		{
			ans = mid;
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (ans);
}
