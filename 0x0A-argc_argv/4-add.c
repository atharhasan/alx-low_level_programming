#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Description: write a program that print its name
 *
 * @argc: input
 * @argv: input
 *
 * Return: 0 always
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]) == 1)
			{
				sum += atoi(argv[i]);
				printf("%d\n", sum);
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("0\n");
	return (0);
}
