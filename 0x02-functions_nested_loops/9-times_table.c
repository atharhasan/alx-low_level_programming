#include "main.h"

/**
 * times_table - function
 *
 * Description: function that can print the 9 times table
*/

void times_table(void)
{
	int h, m;

	for (h = 0; h <= 10; h++)
	{
		for (m = 0; m <= 10; m++)
		{
			_putchar(h + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((h * m) + '0');
		}
		_putchar('\n');
	}
}
