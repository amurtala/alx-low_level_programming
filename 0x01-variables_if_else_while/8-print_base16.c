#include <stdio.h>

/**
 * main - print single gidit hexadecimal number in lower case
 * stating from zero in base 16, and end with new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	char ch;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
