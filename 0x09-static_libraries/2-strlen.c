#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: The string
 *
 * Return: The string as an integer number
 */
int _strlen(char *s)
{
	int q = 0;

	while (*(s + q) != '\0')
		q++;

	return (q);
}
