#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: input array
 * @size: array size
 * @cmp: pointer to the function to be used
 * for comparing values
 * Return: index of first eement for which cmp
 * function does not return 0
 * if no match return -1. if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
