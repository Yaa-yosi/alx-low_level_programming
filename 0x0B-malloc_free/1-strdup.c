#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - return pointer to a newly allocated memory
 *@str: string
 *Return: null or string
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	ptr = malloc((len * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);
	return (ptr);
	free(ptr);
}

