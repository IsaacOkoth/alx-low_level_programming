#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');

	for (i = 0; i < 6; i++)
		putchar(alphabet[i]);

	putchar('\n');

	return (0);
}
