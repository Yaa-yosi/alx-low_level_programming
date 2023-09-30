#include "main.h"
/**
 * _isupper - used to check for upper case characters
 * @c: to check for upper case
 * Return: returns 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
