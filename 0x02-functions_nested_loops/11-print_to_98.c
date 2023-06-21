#include "main.h"
#include <stdio.h>

/**
 * print_to_89 - function
 *
 * Description: function that can print numbers to 89
 *
 * @n: int param
*/

void print_to_89(int n)
{
	int i;

	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	} else
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	pritnf("\n");
}
