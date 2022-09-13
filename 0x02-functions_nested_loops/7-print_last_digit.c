#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: r is an integer
 *
 * Return: integer
 */

int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
		_putchar(last_digit + '0');
		return (r % 10);
	}
}
