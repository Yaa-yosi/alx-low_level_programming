#include "main.h"
/**
 * _islower - used to check for lower case characters
 * @c: to check for lower case
 * Return: returns 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
