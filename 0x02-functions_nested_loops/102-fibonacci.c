#include <stdio.h>

/**
 * main - prints the first 50 fibonacci starting 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	long int x = 1, y = 2, s;

	printf("%li", x);
	putchar(',');
	putchar(' ');
	printf("%li", y);
	for (i = 0; i < 49; i++)
	{
		s = x + y;
		putchar(',');
		putchar(' ');
		printf("%li", s);
		x = y;
		y = s;
	}
	putchar('\n');

	return (0);
}
