#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @a: the integer to extract the last digit from
 * Return: last digit values
 */
int print_last_digit(int a)
{
	int i;

	i = a % 10;

	if (a < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
