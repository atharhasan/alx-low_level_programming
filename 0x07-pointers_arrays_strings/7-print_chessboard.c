#include "main.h"
#include <string.h>

/**
 * print_chessboard - function
 *
 * Description: function that prints the chessboard
 *
 * @a: number of array
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < sizeof(a); i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
