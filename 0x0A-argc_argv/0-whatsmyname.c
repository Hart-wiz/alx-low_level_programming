#include <stdio.h>
#include "main.h"



/**
 * main - prints the program name
 *
 * @argc: is the number of argument supplied to the program.
 * @argv: is the array of pointers to the argument
 * Return: returns 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
