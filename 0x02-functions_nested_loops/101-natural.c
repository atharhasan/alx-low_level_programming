#include <stdio.h>

/**
 * main- entry point
 *
 * Description: function that computes and prints the sum of all the multiples
 *
 * Return: 0 success
 */

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
