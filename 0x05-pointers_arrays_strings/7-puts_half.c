#include "main.h"
/**
 *puts_half - print half of a string
 *@str: string
 *Return: void
 */
void puts_half(char *str)
{
	int i, j;
	int k = 0;

	for (i = 0; str[i] != '\0'; i++)
		k++;
	j = (k - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
