#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array of chars
 * @size: The size of array to be processed
 * @c: The specific char to be processed with
 *
 * Return: pointer to arrry (0), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *u;
	unsigned int m;

	if (size == 0)
		return (NULL);

	u = malloc(sizeof(char) * size);

	if (u == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		u[m] = c;

	return (u);
}
