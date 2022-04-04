#include "main.h"
/**
 * _isalpha - checking for upper, lower and letter
 * @c: parameter to be passed
 * Return: returns 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
