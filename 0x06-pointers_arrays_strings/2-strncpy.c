#include "main.h"
#include <string.h>
/**
 *_strncpy - copy two strings using strncpy
 *@dest: string 1
 *@src: string 2
 *@n: string length to copy
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
