#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints a natural number upto 98
 * @n: destination natural number to be printed
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
