#include <stdio.h>
/**
 * main - print numbers
 * from 0 to 9
 * separated by " , "
 *
 * Return: 0 if success
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
