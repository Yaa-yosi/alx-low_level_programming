#include "main.h"
/**
 *print_to_98 - print from 0 to 98
 *@n: represent int value
 *Return: void
 */
void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
}

