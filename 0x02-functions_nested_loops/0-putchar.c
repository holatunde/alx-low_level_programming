#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0
 */

int main(void)
{
	char text[8] = "_putchar";
	int n = 0;
   
	for (n = 0; n < 8; n++)
	{
		_putchar(text[n]);
	}
	_putchar('\n');
	return (0);
}
