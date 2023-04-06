#include "main.h"

/**
 * _strlen_recursion - Entry
 * Description: A function that returns the length of a string
 * @s: string to be measured
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int lengthmeasu = 0;
	if (*s)
	{
		lengthmeasu++;
		lengthmeasu+=_strlen_recursion(s + 1);
	}
	return(lengthmeasu);
}
