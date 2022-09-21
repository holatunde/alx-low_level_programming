#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two string
 * @dest: destination
 * @src: source
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest[] = "Hello ";
	char *src[] = "World!";
	char *ptr;

	*ptr = _strcat(*dest, *src);
	putchar("%s\n", *ptr);

	return (*ptr);
}
