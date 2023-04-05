#include "main.h"

/**
 * _strlen_recursion - Entry
 * Description: A function that returns the length of a string
 * @s: length of a str
 * Return : Always 0 (success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '/0')
	{
		Return(0);
	}
	s++;
	return(_strlen_recursion(s + 1));
}
