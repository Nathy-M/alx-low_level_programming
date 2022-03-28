#include "main.h"
/**
 * print_chessboard - prints a chessboard with 8 columns
 * @a: the chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int count;
	int counter;

	for (count = 0; a[count][7]; count++)
	{
		for (counter = 0; counter < 8; counter++)
		{
			_putchar(a[count][counter]);
		}
		_putchar('\n');
	}
}
