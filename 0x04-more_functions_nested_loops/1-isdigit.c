#include "main.h"
/**
 * _isdigit -a function that checks for a digit
 * @c: The parameter
 * Return: 1 on successful execution 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= 45 && c <= 57)
		return (1);
	else
		return (0);
}
