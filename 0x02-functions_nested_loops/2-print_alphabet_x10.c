#include "main.c"
/**
 * 2-print_alphabet_x10.c -- prints lower case letters 10 times
 */
void print_alphabet_x10(void)
{
	char letter;
	int num;
	while (num <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
