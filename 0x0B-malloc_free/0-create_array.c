#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - create an array of characters
 *@size: size of mellory allocation
 *@c: array of characters
 *Return: NULL or array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == '0')
		return (NULL);

	 ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
