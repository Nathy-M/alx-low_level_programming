#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(voi)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if(n > 0)
	{
		printf("%dis positive\n", n);
	}
	
	if(n == 0)
	{
		printf("%dis zero\n", n);
	}
	
	if(n < 0)
	{
		printf("%dis negative\n", n);
	}

	return (0);
}	
