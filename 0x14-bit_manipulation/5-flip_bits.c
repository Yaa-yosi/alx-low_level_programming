#include "main.h"
/**
 *flip_bits - function that flips a bit
 *@n: first number
 *@m: second number
 *Return: returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int res = n ^ m;

	while (res > 0)
	{
		if (res & 1)
		{
			count++;
		}
		res >>= 1;
	}
	return (count);
}
