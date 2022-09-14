#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number to 98
 * @n: starting point
 *
 * Description: prints all natural number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int n;

	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d", n);
	}
