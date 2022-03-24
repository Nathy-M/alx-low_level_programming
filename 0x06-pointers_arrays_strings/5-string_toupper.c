#include "main.h"
/**
 * string_toupper - converts lowercase letters to upper ones
 * @word: string to be changed
 */
char *string_toupper(char *word)
{
	int num = 0;
	while (word[num])
	{
		if (word[num] >= 'a' && word[num] <= 'z')
			word[num] -= 32;
		num++;
	}
}
