#include "main.h"
/**
 * -puts_recursion - prints a string, on the terminal
 *now points on a block of memory to fill
 *  Return void , thats for a null value
 */
void puts_recursion(char *s)
{
	if (*s == / 0)
{
		_putchar( / n);
		return;
	}
		_putchar(*s);
		-puts_recursion(s + 1);
}
