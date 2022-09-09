#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	while (i = 97, j = 65, i < 123, j < 91, i++, j++)
	{
		putchar(i, j);
	}
	putchar(10);
	return (0);
}
