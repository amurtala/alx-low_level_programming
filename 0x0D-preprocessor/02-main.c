#include <stdio.h>
/**
 * main - print name of file it was compiled from
 *
 * Return: nothing
 **/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
