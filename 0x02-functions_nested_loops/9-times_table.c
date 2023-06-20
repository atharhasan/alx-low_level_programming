#include "main.h"

/**
 * times_table - function
 *
 * Description: function that can print the 9 times table
*/

void times_table(void)
{
	int h, m;

	for (h = 0; h <= 9; h++)
	{
		_putchar(h + '0');
		for (m = 0; m <= 9; m++)
		{
			_putchar((h * m) + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
