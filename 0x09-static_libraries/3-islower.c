#include "main.h"
/**
 * _islower - returns value 1 if c is
 *            lowercase else returns
 *            value 0
 * @c: number to be checked
 * Return: returns success
 */
int _islower(int c)
{
       if (c >= 'a' && c <= 'z')
	       return (1);
       else
	       return (0);
}
