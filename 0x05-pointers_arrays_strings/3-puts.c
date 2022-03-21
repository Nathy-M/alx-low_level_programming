#include "main.h"
#include <string.h>
/**
 * _puts - prints string, followed by new line
 * @str: character pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
