#include <stdio.h>
/**
 * main - print alphapets
 *
 * Return: 0 if success
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
