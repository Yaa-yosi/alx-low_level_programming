#include "main.h"

/**
 *_isalpha - used to check for alphabets
 *@c: to check for characters
 *Return: returns 0 or 1
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
