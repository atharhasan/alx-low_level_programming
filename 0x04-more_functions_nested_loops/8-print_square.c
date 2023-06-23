#include "main.h"

/**
 * print_square - function
 *
 * Description: function that prints a square, followed by a new line.
 *
 * @size: input
*/

void print_square(int size)
{
	int i, lin;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (lin = 1; lin < size; lin++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
