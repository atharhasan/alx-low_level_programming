#include "main.h"

/**
 * is_prime_number - function
 *
 * Description:function that  returns 1 if the input integer is a prime number
 *
 * @n: input
 * @i: input
 *
 * Return: 0 if false 1 if true
*/

int check_num(int n, int i);
int is_prime_number(int n)
{
	return (check_num(n, 2));
}

/**
 * check_num - function
 *
 * Description:function that  returns 1 if the input integer is a prime number
 *
 * @n: input
 * @i: input
 *
 * Return: 0 if false 1 if true
*/

int check_num(int n, int i)
{
	if (i >= n && n > 1)
	{
		return (1);
	} else if (n % i == 0 || n <= 1)
	{
		return (0);
	} else
		return (check_num(n, i + 1));
}
