#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: return 0 on success
 */
int main(void)
{
	long num = 612852475143;
	int count;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			printf("%ld ", count);
			num = num / count;
		}
		if (count > num)
		{
			printf("ld", count);
		}
	}
	

	return (0);
}
