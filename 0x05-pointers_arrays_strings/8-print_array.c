#include "main.h"
#include <string.h>

/**
 * print_array - function
 *
 * Description: prints n elements of an array of integers
 *
 * @a: input
 * @n: the number of array
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
