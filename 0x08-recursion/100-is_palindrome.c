#include "main.h"
#include <stdlib.h>
#include <string.h>
int _is_palindrome(char *s, int str_len, int index);
int is_palindrome(char *s);
/**
 * _is_palindrome - check if the string is palindrome using recursion
 * @s; string to be checked.
 * @str_len: string length
 * @index: index to be checked
 * Return: returns 1 or 0
 */
int _is_palindrome(char *s, int str_len, int index)
{
	if (index >= str_len)
		return (1);
	if (s[index] != s[str_len])
		return (0);
	return (_is_palindrome(s, index + 1, str_len - 1));
}
/**
 * is_palindrome - check if the string is palindrome
 * @s: string to be checked
 *
 * Return: returns 1 or 0
 */
int is_palindrome(char *s)
{
	int index = 0;
	int str_len;

	str_len = strlen(*s);
	if (*s != '\0')
		return (1);
	return (_is_palindrome(s, str_len, index));
}
