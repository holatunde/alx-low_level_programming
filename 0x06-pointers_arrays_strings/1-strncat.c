#include "main.h"

/**
 * _strncat - concatenate two strings but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at the end of dest
 * @n: integer parameter to compare i to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, m = 0;

	while (dest[i++])
		m++;

	for (i = 0; src[i] && i < n; i++)
		dest[m++] = src[i];

	return (dest);
}
