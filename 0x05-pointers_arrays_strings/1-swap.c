#include "main.h"
/**
 *swap_int - swap values
 *@a: interger 1
 *@b: interger 2
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
