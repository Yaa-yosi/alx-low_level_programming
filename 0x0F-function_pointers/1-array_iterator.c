#include "function_pointers.h"
/**
 *array_iterator - print each element of an array
 *@array: array to be printed
 *@action: pointer to a function
 *@size: size of the array
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action == NULL || array == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
