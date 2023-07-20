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

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		ch = va_arg(li, char *);

		if (ch == NULL)
			printf("nil");
		printf("%s", ch);

		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
