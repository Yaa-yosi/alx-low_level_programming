#include "main.h"
/**
 *sqrt_helper - calculate natural square root
 *@n: input
 *@start: start
 *@end: end
 *Return: -1
 */
int sqrt_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	square = mid * mid;
	if (square == n)
		return (mid);
	else if (square < n)
		return (sqrt_helper(n, mid + 1, end));
	else
		return (sqrt_helper(n, start, mid - 1));
}
/**
 * _sqrt_recursion - check for square
 * @n: input
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0, n));
}
