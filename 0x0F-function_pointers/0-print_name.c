#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: function pointer parameter
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
