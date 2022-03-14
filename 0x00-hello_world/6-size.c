#include <stdlib.h>
#include <stdio.h>
/**
 * main -- prints the size of varius data types
 *
 * Return: returns 0
 */
int main(void)
{
	printf("Size of a char is: %zu byte(s)\n", sizeof(char));
	printf("Size of an int is: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int is: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int is: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float is: %zu byte(s)\n", sizeof(float));
return (0); }	
