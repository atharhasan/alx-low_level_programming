#include "main.h"
/**
 * more_numbers- function
 *
 * Description: function that can print numbers from 0 to 14 - 10 times
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
		_putchar('\n');
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');
		}
	}
}
