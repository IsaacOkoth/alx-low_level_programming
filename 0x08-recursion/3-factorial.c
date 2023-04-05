#include "main.h"

/**
 * factorial - calculating the factoral of a number
 * @n:the number to calculate  the factoral
 * return:integer value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
