#include "main.h"
/**
 * _isupper - a function that checks for uppercase character.
 * @c: the integer to be checked
 * Return: 1 on success and  on failure
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
