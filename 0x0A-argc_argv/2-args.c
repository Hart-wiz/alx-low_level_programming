#include <stdio.h>

/**
 * main - prints all arguments it recieves
 *
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= (argc - 1); i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
