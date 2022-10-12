#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: size of array
 * @cmp: function pointer
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
