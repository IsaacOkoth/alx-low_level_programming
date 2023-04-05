#include "main.h"

/**
 * is_divisible - Entry point
 * Description:Prime number
 * @n:Integer
 * @div:integer
 * Return:1 if it is a prime number otherwise
 */

int is_divisible(int n, int div)
{
	if (div == 1 || div == n)
	{
		return (0);
	}
	return (is_divisible(n, div - 1));
}

/**
 * is_prime_number - Entry point
 * Describing:prime number
 * @n:integer
 * Return:integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (is_divisible(n, n - 1));
}
