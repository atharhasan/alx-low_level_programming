#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
	int i, j, sum = 0;
	char c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; (c = argv[i][j]) != '\0'; j++)
			{
				if (!isdigit(c))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	} else
	{
		printf("0\n");
	}
	return (0);
}
