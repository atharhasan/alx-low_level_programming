#include "main.h"

/**
 * print_diagonal - function
 *
 * Description: function that draws a diagonal line on the terminal
 *
 * @n: input number
*/

void print_diagonal(int n)
{
	int i, space;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space < i; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
