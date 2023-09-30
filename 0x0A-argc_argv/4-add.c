#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * main - adds positive numbers
 * @argc: count arguements
 * @argv: array of arguements
 * Return: result, 0, and error
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	bool error = false;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0)
		{
			error = true;
			break;
		}

		sum += num;
	}
	if (error)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
