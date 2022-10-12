#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @array: The array needed
 * @cmp: pointer to the function to be used to compare values
 * @size: the number of elements in the array
 * Return:  return 0 if no element matches, return -1 if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
