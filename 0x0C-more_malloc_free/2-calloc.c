#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocating memory using calloc
 *@nmemb: number of blocks
 *@size: size of each blocks
 *Return: a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = calloc(nmemb, size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

