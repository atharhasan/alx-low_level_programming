#include "main.h"

/**
 * print_triangle - function
 *
 * Description: function that draws a diagonal line on the terminal
 *
 * @size: input number
*/

void print_triangle(int size)
{
	int i, space;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (space = 1; space <= size; space++)
			{
				if ((i + space) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
