#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: r is an integer
 *
 * Return: integer
 */

int print_last_digit(int r)
{
	if (r > 0 || r == 0)
	{
		_putchar('0' + r % 10);
		return (r % 10);
	}
	else
	{
		r = r * -1;
		_putchar(r % 10 + '0');
		return (r % 10);
	}
}
