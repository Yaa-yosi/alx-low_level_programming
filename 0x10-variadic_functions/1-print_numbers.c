#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - prints numbers
 *@separator: string containing numbers
 *@n: counts number of arguements
 *Return: string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_args;
	unsigned int i, num;

	va_start(num_args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(num_args, int);
	printf("%d", num);

	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");

	va_end(num_args);
}
