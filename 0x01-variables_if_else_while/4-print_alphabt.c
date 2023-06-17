#include <stdio.h>

/**
 * main - entry point
 *
 * Description: programe that print alphabet in lowercase
 *
 * Return:0 success
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
