#include "main.h"
/**
 *rev_string - reverse a string
 *@s: string
 *Return: void
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	char k;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	for (i = 0; i < j / 2; i++)
	{
		k = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = k;
	}

}
