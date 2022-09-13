#include "main.h"

/**
 * islower - function to check for lowercase
 * @c: c is an ascii character that we will use for the argument
 * Description: checks for lowercase
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
