#include <stdio.h>

/**
 * main - function prints the number of arguments passed into it
 *
 * @argc: counts the number of arguments passed
 * @argv: pointer to the array of arguments passed
 * Return: returns 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
