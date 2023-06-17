#include <stdio.h>

/**
 * main - entry point
 *
 * Description: programe that print numbers
 *
 * Return:0 success
*/

int main(void)
{
	int i = 0;
	int x = 1;

	while (i <= 8)
	{
		putchar(i + '0');
		i++;
	}

	while (x <= 9)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');

	return (0);
}
