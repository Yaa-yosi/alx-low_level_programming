#include "variadic_functions.h"
/**
 *sum_them_all - does sum of all its parameters
 *@n: counts number of parameters
 *Return: 0, sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mylist;
	unsigned int i, sum = 0;

	va_start(mylist, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(mylist, unsigned int);

	va_end(mylist);
	return (sum);
}
