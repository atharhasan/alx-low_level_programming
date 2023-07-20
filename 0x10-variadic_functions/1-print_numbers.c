#include "variadic_functions.h"

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
		printf("%d%s", va_arg(li, unsigned int),
				n ? (separator ? separator : "") : "\n");
	}
	va_end(li);
}
