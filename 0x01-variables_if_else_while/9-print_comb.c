#include <stdio.h>
/**
 * main -It requires patience
 * Return: o forever
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
