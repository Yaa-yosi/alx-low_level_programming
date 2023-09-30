#include "main.h"
#include <string.h>
/**
 *_strncat - concatenate two strings using strncat
 *@dest: destination string
 *@src: source string
 *@n: string length to concatenate
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
