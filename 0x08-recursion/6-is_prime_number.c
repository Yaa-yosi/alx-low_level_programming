#include "main.h"
/**
 *is_prime - calculate if its prime
 *@n: number to check
 *@i: divisor
 *Return: 1,0 and prime number
 **is_prime_number - print prime
 */
int is_prime(int n, int i)
{

	if (n < 2)
		return (0);
	if (i == 2)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i - 1));
}
int is_prime_number(int n)
{
	return (is_prime(n, n / 2));
}
