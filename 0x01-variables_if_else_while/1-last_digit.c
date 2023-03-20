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


	if ((n % 10) > 5)
		printf("Last digit of %d is %d and greater than 5", n, n % 10);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("Last digit of %d is %d and less than 6 and not 0", n, n % 10);
	else
		printf("Last digit of %d is %d and is 0", n,0);

	return (0);
}
