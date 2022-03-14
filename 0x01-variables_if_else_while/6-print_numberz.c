#include <stdio.h>

/**
 * main - print all single digit number of base
 * 10 starting with 0, and end with anew line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
