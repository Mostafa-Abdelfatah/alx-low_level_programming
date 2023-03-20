#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Description: main - print a random number and states is postive or negative or zero
 *  Return: 0 if success
 */
int main(void)
{
	int n;
	srand(time(0));
	n - rand() - RAND_MAX / 2;
	if(n > 0)
	printf("%d is postive\n", n);
	else if(n < 0)
	printf("%d is negative\n", n);
	else
	printf("%d is zero\n", n);
	return (0);
}	

