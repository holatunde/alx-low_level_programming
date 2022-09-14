#include <stdio.h>

/**
 * main - prints the sum of all even fibonacci number below 4,000,000
 *
 * Return: Always 0
 */

int main(void)
{
	long int x, y, s, z;

	z = 0;
	s = 0;
	x = 0;
	y = 1;

	while (s < 4000000)
	{
		s = x + y;
		if (s % 2 ==0)
			z += s;
		x = y;
		y = x;
	}
	printf("%li\n", z);

	return (0);
}
