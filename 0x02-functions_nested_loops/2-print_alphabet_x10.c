#include "main.h"

/**
 * print_alphabet_x10 - This function prints the lowercase alphabet 10 times.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
