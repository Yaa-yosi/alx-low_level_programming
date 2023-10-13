#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - print strings
 *@separator: pointer containing string
 *@n: counts number of stings
 *Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_str;
	unsigned int i;
	char *ptr;

	va_start(print_str, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(print_str, char *);
		if (ptr == NULL)
			printf("(nil)");
		printf("%s", ptr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(print_str);
}
