#include <stdio.h>
/**
 * main -Counting in base 16
 * Return: 0 always for a successful work
 */
int main(void)
{
	char z;
	int y;

	z = 'a';
	y = 0;

	while
		(y <= 9)
		{
			putchar(y + '0');
			y++;
		}
	while
		(z <= 'f')
		{
			putchar(z);
			z++;
		}
	putchar('\n');
	return (0);
}
