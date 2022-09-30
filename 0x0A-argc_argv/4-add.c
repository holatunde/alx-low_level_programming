#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned int x, sum, num;

	sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (x = 0; argv[argc][x]; x++)
		{
			if (!(isdigit(argv[argc][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%u\n", sum);
	return (sum);
}
