#include <stdlib.h>
#include <stdio.h>
/**
 * main -- trying to print hexadecimal numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int num;
	char lett;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (lett = 'a'; lett <= 'f'; lett++)
	{
		putchar(lett);
	}
putchar('\n');
return (0); }
