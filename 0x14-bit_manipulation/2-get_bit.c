#include "main.h"
/**
 *get_bit - returns the value of a bit at a given index.
 *@n: given number
 *@index: index to be changed
 *Return: the value of the bit at index index or -1 if an error *occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;
	int mask = n >> index;

	if (index > 63)
		return (-1);
	res = mask & 1;
	return (res);
}
