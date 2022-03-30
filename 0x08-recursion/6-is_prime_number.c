#include "main.h"
/**
 * is_prime_number - function that finds prime number.
 * @n: number to be computed
 *
 * Return: returns 1 if number is prime.
 *         otherwise returns 0
 */
int is_prime_number(int n)
{
	int div = num / 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	else
	{
		is_prime(num, div);
	}
}
int is_prime(int num, int div)
{
	if (div == 1)
	{
		return (1);
	}
	else
	{
		if (num % div == 0)
		{
			return (0);
		}
		else
		{
			is_prime (num, div - 1);

		}
	}
	return (is_prime(num, div - 1));
}
