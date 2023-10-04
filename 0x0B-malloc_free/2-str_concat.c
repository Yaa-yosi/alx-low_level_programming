#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - copy and concatenate to a new pointer
 *@s1: string 1
 *@s2: string 2
 *Return: null and result
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len_s1;
	size_t len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
