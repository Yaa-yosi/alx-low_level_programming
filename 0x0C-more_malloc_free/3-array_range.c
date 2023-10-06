#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: NULL or ptr_range
 */
int *array_range(int min, int max)
{
	int *ptr_range;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr_range = malloc(size * sizeof(int));
	if (ptr_range == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr_range[i] = min++;
	return (ptr_range);
}
