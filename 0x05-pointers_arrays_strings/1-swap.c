#include "main.h"

/**
 * swap_int - function
 *
 * Description: function that swaps the values of two integers
 *
 * @a: input
 *
 * @b: input
*/

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
