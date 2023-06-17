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
	int x = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		while (x <= 9)
		{
		putchar(x + '0');
		if (i != x && i < x)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
		}
	i++;
	}
	putchar('\n');

	return (0);
}
