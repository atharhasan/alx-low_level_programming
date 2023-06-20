#include "main.h"

/**
 * times_table - function
 *
 * Description: function that can print the 9 times table
*/

void times_table(void)
{
	int num1, num2, sp;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');
		for (num2 = 0; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');
			sp = num1 * num2;

			if (sp <= 9)
			{
				_putchar(' ');
			} else
			{
				_putchar((sp / 10) + 48);
			}
			_putchar((sp % 10) + 48);
		}
		_putchar('\n');
	}
}
