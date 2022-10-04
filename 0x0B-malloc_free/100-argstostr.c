#include "main.h"
#include <stdlib.h>

/**
 * len - returns length of str
 * @str: string counted
 * Return: the length of string
 */
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}

/**
 * argstostr - a function that concatenate all the arguments of your program
 * @ac: counts of args passed
 * @av: array of argument
 *
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *new_str = NULL;
	int k, i = ac, j, sum = 0, tmp = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (ac--)
		sum += (len(av[ac]) + 1);
	new_str = (char *) malloc(sum + 1);

	if (new_str != NULL)
	{
		while (k < i)
		{
			for (j = 0; av[k][j] != '\0'; j++)
				new_str[j + tmp] = av[k][j];
			new_str[tmp + j] = '\n';
			tmp += (j + 1);
			k++;
		}
		new_str[tmp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_str);
}
