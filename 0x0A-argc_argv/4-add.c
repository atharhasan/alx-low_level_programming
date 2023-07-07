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

	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		} else if (argc == 0)
		{
			printf("0\n");
		} else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
