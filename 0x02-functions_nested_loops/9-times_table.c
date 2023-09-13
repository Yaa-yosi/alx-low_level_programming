#include "main.h"
/**
 *times_table -  prints the 9 times table
 *Return: void
 */
void times_table(void)
{
	int a, b, p;/*p for product*/

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			p = a * b;
			if (p > 9)
			{
			_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
			}
			else
				_putchar(p + '0');
			if  (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
