#include "main.h"

/**
 * print_times_table - prints times table
 * @n: integer for which the times table will be printed
 *
 * Description: prints the times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int j, k;

	for (n = 0; n <= 15; n++)
	{
		_putchar('0');

		for (j = 0; j <= 15; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = n * j;
			if (k <= 15)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
