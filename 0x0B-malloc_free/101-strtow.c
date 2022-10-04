#include "main.h"
#include <stdlib.h>

/**
 * len - returns length to str
 * @str: string to be counted
 *
 * Return: length of the string
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
 * num_words - counts the num of words in a string
 * @str: string to be used
 *
 * Return: number of words
 */

int num_words(char *str)
{
	int i = 0, words = 0;

	while (i <= len(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			 i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}
/**
 * strtow - splits strings to words
 * @str: string to be splitted
 *
 * Return: pointer to the array of the splitted string
 */

char **strtow(char *str)
{
	char **split;
	int i, j = 0, tmp = 0, size = 0, words = num_words(str);

	if (words == 0)
		return (NULL);
	split = (char **) malloc(sizeof(char *) * (words + 1));
	if (split != NULL)
	{
		for (i = 0; i <= len(str) && words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && (str[i] != ' '))
			{
				split[j] = (char *) malloc(sizeof(char) * size + 1);
				if (split[j] !=  NULL)
				{
					while (tmp < size)
					{
						split[j][tmp] = str[(i - size) + tmp];
						tmp++;
					}
					split[j][tmp] = '\0';
					size = tmp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(split[j]);
					free(split);
					return (NULL);
				}
			}
		}
		split[words] = NULL;
		return (split);
	}
	else
		return (NULL);
}
