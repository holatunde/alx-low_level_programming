#include "main.h"

/**
 * islower - function to check for lowercase
 * @c: is the int that will use for the argument of the function
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
