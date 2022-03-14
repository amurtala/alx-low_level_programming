#include <stdio.h>

/**
 * main - print the alphabetsin lower case except e and q
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	retuen (0);
}
