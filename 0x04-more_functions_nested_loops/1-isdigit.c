#include "main.h"
/**
 * _isdigit - checks for a digit between 0 and 9
 * @c - digit to be checked
 * Return: returns 0 on success
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
