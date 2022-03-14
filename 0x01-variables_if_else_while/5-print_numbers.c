#include <stdio.h>

/**
 * main - print all single digit number of base 10 starting from 
 * zero, and end with a new line
 * Return: Always 0 (success)
 */
int main()
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");

	return (0);

}
