#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints a random number
 * then states if it is
 * less than 6 or greater than 5
 * or is 0
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int a;

	a = n % 10;

	if (a > 5)
		printf("Last digit of %d is %d and greater than 5", n, a);
	else if (a < 6 && a != 0)
		printf("Last digit of %d is %d and less than 6 and not 0", n, a);
	else
		printf("Last digit of %d is %d and is 0", n, a);

	return (0);
}
