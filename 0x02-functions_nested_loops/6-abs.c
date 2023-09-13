#include "main.h"
/**
 *_abs - calculate absolute values of intergers
 *@r: interger
 *Return: always 0
 */
int _abs(int r)
{

	if (r > 0)
		return (r);
	else if (r < 0)
		return (-r);
	return (0);
}
