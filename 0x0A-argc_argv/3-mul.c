#include "main.h"
#include <stdio.h>

/**
 * main - this program multiplies arguments
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mult = x * y;

	printf("%d\n", mult);
	return (0);
}
