#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10x
 * Return: returns 0
 */
void print_alphabet_x10(void)
{
	char l;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
