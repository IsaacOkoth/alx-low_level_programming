#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returning natural square root of a number
 * @n:number to calculate the square root of itself
 * Return:the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - to find the naturals
 * square root of the number
 * @n:number to calculate square root
 * @i:iterator
 * Return:the resulting square roots
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
