#include <stdio.h>

/**
 * main - prints the first 98 fibonacci sequence starting with 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	int i, x = 1, y = 2;
	unsigned long s;

	printf("%d, ", x);
	printf("%d", y);
	for (i = 1; i < 98; i++)
	{
		s = x + y;
		putchar(',');
		putchar(' ');
		printf("%lu", s);
		x = y;
		y = s;
	}
	putchar('\n');

	return (0);
}
