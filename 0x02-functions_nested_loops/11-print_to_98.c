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
	while (n <= 89)
	{
		printf("%d, ", n);
		n++;
	}
}
