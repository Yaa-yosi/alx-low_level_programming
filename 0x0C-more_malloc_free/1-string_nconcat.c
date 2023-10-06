#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to be concatenated
 * Return: characted pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_string;
	unsigned int len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = 0;
	while
		(s1[len_s1] != '\0') {
			len_s1++;
	}
	len_s2 = 0;
	while
		(s2[len_s2] != '\0') {
			len_s2++;
	}
	if (n >= len_s2)
		n = len_s2;
	ptr_string = malloc((len_s1 + n) * sizeof(char) + 1);
	if (ptr_string == NULL)
		return (NULL);
	len_s1 = 0;
	while
		(s1[len_s1] != '\0') {
			ptr_string[len_s1] = s1[len_s1];
			len_s1++;
	}
	len_s2 = 0;
	while
		(len_s2 < n) {
			ptr_string[len_s1] = s2[len_s2];
			len_s1++;
			len_s2++;
	}
	ptr_string[len_s1] = '\0';
	return (ptr_string);
}
