#include "main.h"
/**
 *print_last_digit - to print last digits
 *@r: taking inputs
 *Return: returns last digits
 */
int print_last_digit(int r)
{
	int s;

	s = r % 10;

	if (s < 0)
		s = (s * -1);
	_putchar(s + '0');
	return (s);
}

