#include "main.h"

/**
 * print_alphabet_x10 - funcion
 *
 * Description: function can print alphabet in lowercase 10 times
*/

void print_alphabet_x10(void)
{
	int i = 'a';
	int j;

	while (i <= 'z')
	{
		for (j = 0; j <= 10; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
		i++;
	}
}
