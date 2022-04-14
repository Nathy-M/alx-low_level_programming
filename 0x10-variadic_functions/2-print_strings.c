#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_string - function that prints strings followed by newline
 * @separator: is the string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: ellipsis
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nm;
	unsigned int num;
	char *s;

	va_start(nm, n);

	for (num = 0; num < n; num++)
	{
		s = va_arg(nm, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf('\n');
	va_end(strings);
}
