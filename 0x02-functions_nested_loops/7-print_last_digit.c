#include <main.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	if (n < 0 || n == 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else
	{
	n = n * -1;
	_putchar(n % 10 + '0');
	return (n % 10);
	}
}
