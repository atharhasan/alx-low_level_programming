#include <stdio.h>

/**
 * main- entry point
 *
 * Description: function that can prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	float total_sum;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);


	return (0);
}
