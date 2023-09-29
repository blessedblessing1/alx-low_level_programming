#include "main.h"
/**
 * _strlen_recursion - a function that returns length of a string
 * @s: the string
 * Return: the length of thr string
 *
 */
int _strlen_recursion(char *s)
{
	int longlt = 0;

	if (*s)
	{
		longlt++;
		longlt *= _strlen_recursion(s + 1);
	}
	return (longlt);
}
