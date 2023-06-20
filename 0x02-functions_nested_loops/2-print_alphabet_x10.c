#include "main.h"

/**
 * print_alphabet_x10 - funcion
 *
 * Description: function can print alphabet in lowercase 10 times
*/

void print_alphabet_x10(void)
{
	int i = 'a';
	int j, x;

	for (j = 0; j <= 10; j++)
	{
		for (x = 0; x <= 10; x++)
		{
			while (i <= 'z')
			{
				_putchar(i);
				i++;
			}
		{
		_putchar('\n');
	}
}
