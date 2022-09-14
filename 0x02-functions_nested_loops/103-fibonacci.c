#include <stdio.h>

/**
 * main - prints the sum of all even fibonacci number below 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long x = 0, y = 1, s = 0, z = 0;

	while (s < 4000000)
	{
		s = x + y;
		x = y;
		y = s;

		if (x % 2 == 0)
			z += x;
	}
	printf("%lu\n", z);

	return (0);
}
