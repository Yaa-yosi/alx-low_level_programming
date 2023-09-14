#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print from 0 to 98
 *@n: represent int value
 *Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
	{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}
