#include "main.h"
/**
 * more_numbers- function
 *
 * Description: function that can print numbers from 0 to 14 - 10 times
*/

void more_numbers(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			num = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				num = j % 10;
			}
			_putchar(num + 48);
		}
		putchar('\n');
	}
}
