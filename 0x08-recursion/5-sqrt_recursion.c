#include "main.h"
#include <stdlib.h>
#include <math.h>
/**
 * _sqrt_recursion - function that returns the natural square root of
 * a number.
 * @n: number to be computed.
 *
 * Return: returns -1 if the number doesnot have natural square root
 *         else returns the square root of a number.
 */

int _sqrt_recursion(int n)
{
	int llimit = 1;
	int rlimit = n;
	int _sqrt;
	int mid;

	if (n < 0)
	{
		return (-1);
	}
	else if(n == 0)
	{
		return (0);
	}
	else
	{
	while (llimit <= rlimit)
	{
		mid = llimit + (rlimit - llimit) / 2;

		if (mid <= (n / mid))
		{
			llimit = mid + 1;
			_sqrt = mid;
		}
		else
		{
			rlimit = mid - 1;
		}
	}
	return (_sqrt);
}
