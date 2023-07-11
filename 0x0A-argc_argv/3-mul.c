#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 *
 * @argc: is the number of arguments supplied to the program
 * @argv: is an array of pointers to the argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}
