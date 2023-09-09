#include <stdio.h>
/**
 * main -Writing both lower and uppercase with putchar
 * Return: 0 always
 */
int main(void)
{
	char b;
	char B;

	b = 'a';
	B = 'A';

	while
		(b <= 'z') {
			putchar (b);
			b++;
		}
	while

		(B <= 'Z') {
			putchar (B);
			B++;
		}
	putchar('\n');
	return (0);
}
