#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0
 */

int main(void)
{
	char text[8] = "putchar";
	int n = 0;

	for (n = 0; n < 9; n++)
	{
		_putchar(text[n]);
	}
	_putchar('\n');
	return (0);
}