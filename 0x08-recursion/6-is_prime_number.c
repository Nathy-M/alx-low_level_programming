#include "main.h"

int is_prime(int n, int mid);
int is_prime_number(int n);

/**
 * is_prime - Checks if a number is divisible.
 * @n: The number to be checked.
 * @mid: middle of the given number
 *
 * Return: returns 1 if the number is prime
 *         returns 0 otherwise
 */

int is_prime(int n, int mid)
{
	if (mid == 1)
	{
		return (1);
	}

	else
	{
		if (n % mid == 0)
		{
			return (0);
		}

		else
		{
			return (is_prime(n, mid - 1));
		}
	}
}

/**
 * is_prime_number - function that finds prime number.
 * @n: number to be computed
 *
 * Return: returns 1 if number is prime.
 *         otherwise returns 0
 */

int is_prime_number(int n)
{
	int mid = n / 2;


	if (n == 1)
	{
	return (0);
	}

	return (is_prime(n, mid));
}
