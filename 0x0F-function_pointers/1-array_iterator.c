#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - calls a function given a parameter on each element
 * @array: integer array
 * @size: size of array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL || action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
	else
		return;
}
