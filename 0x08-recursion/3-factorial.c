#include "main.h"
#include <stddef.h>

/**
 * factorial - return factorial
 * @n: input
 *
 * Return: Always 0 (Success), -1 on error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
	return (1);
}
