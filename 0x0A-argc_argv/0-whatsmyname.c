#include "main.h"
#include <stdio.h>

/**
 * main - a program that print its name
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
