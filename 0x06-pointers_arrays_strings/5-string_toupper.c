#include "main.h"
#include <ctype.h>
/**
 *string_toupper - convert string to uppercase
 *@str: required string
 *Return: str
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		*ptr = toupper((unsigned char)*ptr);
	ptr++;
	}
	return (str);
}
