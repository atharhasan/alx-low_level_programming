#include "main.h"


/**
 * reverse_array - function
 *
 * Description: function that reverses the content of an array of integers.
 *
 * @a: input
 * @n: input
*/

void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
