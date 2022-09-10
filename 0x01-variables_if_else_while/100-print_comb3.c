#include <stdio.h>

/**
 * main - print double digit combos
 *
 * Description: print double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 99)
	{
		j = (i / 10 + '0');
		k = (i % 10 + '0');
		if (j < k)
		{
			putchar(j);
			putchar(k);
			if (i != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
