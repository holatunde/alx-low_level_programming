#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates the string pointed to by @src to
 * to the end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string that will be concatenated upon
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest[] = "Hello ";
	char *src[] = "World!";
	int p = 0,  d = 0;

	while (dest[p++])
		d++;
	for (p = 0; src[p]; p++)
		dest[d++] = src[p];
	return (dest);
}
