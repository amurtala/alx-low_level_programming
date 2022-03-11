#include <stdio.h>

/**
 * main - print the alphabets in lower case, 
 * folloe by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	for (ch = "a"; ch <= "z"; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
