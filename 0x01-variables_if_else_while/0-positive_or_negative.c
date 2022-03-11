#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(voi)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

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
