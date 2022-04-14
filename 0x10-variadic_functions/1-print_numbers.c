#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbes - a function that prints numbers
 * @separator: is the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sp;
	unsigned int val;

	va_start(sp, n);
	for (val = 0; val < n; val++)
	{
		printf("%d", va_arg(sp, int));

		if (val != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(sp);
}
