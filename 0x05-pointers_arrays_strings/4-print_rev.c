#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: string to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int c = strlen(s);

	while (c--)
		putchar(*(s + c));
	putchar(10);
}
