#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - function that prints strings followed by new line
 *
 * @separator: char input
 * @n: unsigned num
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", i != NULL ? va_arg(li, unsigned int) : "nil");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
