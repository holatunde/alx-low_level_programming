#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: r is an integer
 *
 * Return: integer
 */

int print_last_digit(int r)
{
	r = print_last_digit(98);
	if (r > 0 || r == 0)
	{
		_putchar('0' + r);
		_putchar('\n');
		return (r);
	}
	else
	{
		r = r * -1;
		_putchar(r + '0');
		return (r);
	}
}
