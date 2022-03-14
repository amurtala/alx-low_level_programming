#include <stdio.h>

/**
 * main - print prints all possible combinations of single-digit
 * numbers with . and space between then, and end with a new line
 * REturn: Alaways 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	{
	putchar('\n');
	return (0);
}
