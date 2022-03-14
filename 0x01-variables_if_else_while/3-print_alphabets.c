#include <stdio.h>

/**
 *  main - print the alphabets in lowercase, and then in uppercase
 *  then follow by a new  line
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}

