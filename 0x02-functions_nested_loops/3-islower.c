#include "main.h"

/**
 *_islower - check the lowercase character.
 *@c - The character to check
 *
 * Return: Always 0 for success and 1 for faliure
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
