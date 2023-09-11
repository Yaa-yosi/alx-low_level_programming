#include <stdio.h>

/**
 * main - program starts here
 * Return: always returns 0
 */

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}

