#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reverse array
 *@a: string
 *@n: index
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d, ", a[i]);
	}
}
