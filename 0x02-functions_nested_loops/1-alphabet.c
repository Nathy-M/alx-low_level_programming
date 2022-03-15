#include <main.h>
/**
 * main - The entry point of a program
 *
 * Return: returns success
 */
int main(void)
{
	print_alphabet();
	return (0); }

void print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');

}	
