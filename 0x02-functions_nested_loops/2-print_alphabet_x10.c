#include <main.h>

/**
 * print_alphabet_x10 - function to print alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char letter = 'a';

	for (round = 0; round < 1; round++)
	{
		letter = 'a';
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
	return (0);
