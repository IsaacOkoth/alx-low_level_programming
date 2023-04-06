#include "main.h"
/**
 * _puts_recursion - prints a string, on the terminal
 *now points on a block of memory to fill
 *  Return void , thats for a null value
 *  @s: input
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
