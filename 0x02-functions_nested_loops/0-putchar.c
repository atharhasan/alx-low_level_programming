#include "main.h"

/**
 * main - entry point
 *
 * Description: c programe that can print putchar
 *
 * Return: 0 success
*/

int main(void)
{
	char str[] = '_putchar';
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
