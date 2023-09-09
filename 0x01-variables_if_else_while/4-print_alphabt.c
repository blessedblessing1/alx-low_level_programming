#include <stdio.h>
/**
 * main -All alphabets except q and e
 * Return: 0 eachtime
 */
int main(void)
{
	char b;

	b = 'a';
	while
		(b <= 'z')
		{
			if (b != 'q' && b != 'e')
			{
				putchar(b);
			}
			b++;
		}
	putchar('\n');
	return (0);
}
