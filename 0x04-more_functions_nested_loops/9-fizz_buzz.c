#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: program can print numbers from 1 to 100
 *
 * Return: 0 always
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		printf("%d ", i);
	}
	return (0);
}
