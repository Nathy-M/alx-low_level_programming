#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: return 0 on success
 */
int main(void)
{
	long int num = 612852475143;
	int count;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			num = num / count;
		}
		if (count > num)
		{
			printf("%ld", count);
		}
		printf("\n");
	}
	return (0);
}
