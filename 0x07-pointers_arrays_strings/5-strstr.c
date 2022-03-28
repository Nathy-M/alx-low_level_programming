#include "main.h"
/**
 * _strstr - function that finds the first occurence occurence of the substring needle in the
 * string haystack.
 * @haystack: string to be scanned.
 * @needle: small string to be searched with-in haystack string.
 *
 * Return: returns a pointer to the beggining of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int count;

	if (*needle == 0)
		return (haystack);
	while (*haystack != '\0')
	{
		count = 0;

		if (haystack[count] == needle[count])
		{
			do {
				if (needle[count + 1] == '\0')
					return (haystack);
				count++;
			} while (haystack[count] == needle[count]);
		}
		haystack++;
	}
	return ('\0');
}
