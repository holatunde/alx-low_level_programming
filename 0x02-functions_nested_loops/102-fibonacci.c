#include <stdio.h>

/**
 * main - prints the first 50 fibonacci starting 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	int i, x = 1, y = 2, s;

	printf("%d", x);
	putchar(',');
	putchar(' ');
	printf("%d", y);
	for (i = 1; i < 49; i++)
	{
		s = x + y;
		putchar(',');
		putchar(' ');
		printf("%d", s);
		x = y;
		y = s;
	}
	putchar('\n');

	return (0);
}
