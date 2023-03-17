#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet without e,q.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		char n;

		n = 'a';
		while
			(n <= 'z') {
				if (n != 'e' && n != 'q')
					putchar(n);
				n++;
			}
		putchar('\n');
		return (0);
}
