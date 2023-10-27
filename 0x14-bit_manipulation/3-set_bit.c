#include "main.h"
/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: pointer to string
 *@index: index to be set to 1
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int onmask;

	if (index > 63)
		return (-1);
	onmask = 1UL << index;
	*n = *n | onmask;

	return (1);
}
