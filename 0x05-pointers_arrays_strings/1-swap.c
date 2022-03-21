#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap the values of two integers
 * @a: The value
 * @b: The value
 *
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int t;

	t  = *a;
	*a = *b;
	*b = t;
}
