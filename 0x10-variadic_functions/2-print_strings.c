#include "variadic_functions.h"

/**
 * print_strings - function that prints strings followed by new line
 *
 * @separator: char input
 * @n: unsigned num
 * @...: the strings that will printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *ch;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", (ch = va_arg(li, char *)) ? ch : "nil");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
