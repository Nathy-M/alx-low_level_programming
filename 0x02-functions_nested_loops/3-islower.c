#include "main.h"
/**
 * int _islower(int c);
 */
int _islower(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c = letter)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
