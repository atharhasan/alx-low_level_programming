#include <stdio.h>
#include <stdlib.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
