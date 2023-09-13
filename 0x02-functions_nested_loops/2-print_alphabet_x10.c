#include "main.h"
/**
 * main -prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0
 *
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
