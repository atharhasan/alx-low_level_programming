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
	char a = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
