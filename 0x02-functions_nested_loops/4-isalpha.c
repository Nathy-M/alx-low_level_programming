#include "main.h"
/*
 * int _isalpha(int c) -- checking for upper, lower and letter
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
