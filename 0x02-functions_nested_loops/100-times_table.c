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
	int i, j, k;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

				k = i * j;
				if (k <= 225)
					_putchar(' ');
				else
					_putchar((k / 10) + '0');

				_putchar((k % 10) + '0');
			}
			_putchar('\n');
		}
}
