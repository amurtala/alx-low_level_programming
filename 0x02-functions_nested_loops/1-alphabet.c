#include "main.h"

/**
 * print alphabet - print alphabets in lower case
 *
 * Return: no return value
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}