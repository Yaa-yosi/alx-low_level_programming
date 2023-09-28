#include "main.h"
#include <string.h>
/**
 *_p_check - check if string is palindrome
 *@st: start of string
 *@end: end of string
 *@s: input
 *Return: 0, 1 and result
 */
int _p_check(char *s, int st, int end)
{
	if (st >= end)
		return (1);
	if (s[st] != s[end])
		return (0);
	else
		return (_p_check(s, st + 1, end - 1));
}
/**
 *is_palindrome - check string
 *@s: input
 *Return: result
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);
	else
		return (_p_check(s, 0, length - 1));
}
