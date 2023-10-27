#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to string
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, p2 = 1;
	unsigned int res = 0;
	int len = strlen(b);

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
		{
			res = res + p2;
		}
		p2 = p2 * 2;
	}
	return (res);
}
