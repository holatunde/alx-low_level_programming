#include "main.h"
#include <stdio.h>

/**
 * main - prints all argument it recieves
 * @argc: n args
 * @argv: array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
