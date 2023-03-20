#include <stdio.h>
/**
 * main - print hexa numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
