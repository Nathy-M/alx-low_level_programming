#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: return 0 on success
 */
int main(void)
{
	long num = 612852475143;
	long count;

	while (count < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}

		for (count = 3; count < (num / 2); count++)
		{
			if ((num % count) == 0)
			{
				num /= count;
			}
		}
	}
	printf("%ld\n", prime);
	return (0);
}
