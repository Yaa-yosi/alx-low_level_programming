#include "main.h"
/**
 *_strlen - return string
 *@s: length of string
 *Return: s
 */
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	return (i);
}
