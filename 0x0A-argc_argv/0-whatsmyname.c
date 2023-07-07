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

int main(int argc, char* argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
