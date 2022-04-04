#include "main.h"
/**
 *  * _isupper - return 1 for uppercase letters
 *   * returns 0 for lower case letters
 *    * @c: letter to be checked
 *     * Return: return 0 on sucess
 *      */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
	return (0);
}
