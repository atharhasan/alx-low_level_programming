#include "variadic_functions.h"
#include <string.h>

/**
 * print_numbers - function that prints numbers followed by new line
 *
 * @separator: char input
 * @n: unsigned num
*/

void print_numbers(const char *separator, const unsigned int n, ...)
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
		printf("%d", va_arg(li, unsigned int));

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
