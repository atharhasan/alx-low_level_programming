include "main.h"

/**
 * print_alphabet - function
 *
 * Description: function that can print alphabet in lowercase
*/

void print_alphabet(void)
{
	int i = 'a';

	while (i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
