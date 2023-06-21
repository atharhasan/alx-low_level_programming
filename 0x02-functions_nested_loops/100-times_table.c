#include "main.h"

/**
 * print_times_table - function
 *
 * Description: function that can print the 9 times table
 *
 * @n: input param
*/

void print_times_table(int n)
{
	int num1, num2, sp;

	if (n <= 15 && n >= 0)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
			_putchar(',');
			_putchar(' ');
			sp = num1 * num2;

			if (sp <= 9)
				_putchar(' ');
			if (sp <= 99)
				_putchar(' ');
			if (sp >= 100)
			{
				_putchar((sp / 100) + 48);
				_putchar((sp / 10) % 10 + 48);
			} else if (sp <= 99 && sp >= 10)
				_putchar((sp / 10) + 48);
			_putchar((sp % 10) + 48);
		}
		_putchar('\n');
	}
}
