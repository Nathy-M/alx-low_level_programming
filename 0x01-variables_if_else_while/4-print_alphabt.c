#include <stdlib.h>
#include <stdio.h>
/**
 * main -- printing all letters except q and e
 *
 * Return: returns 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
putchar('\n');
return (0); }
