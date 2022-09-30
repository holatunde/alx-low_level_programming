#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of argument
 *
 * @argc: number of argument
 * @argv: string of argument
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
