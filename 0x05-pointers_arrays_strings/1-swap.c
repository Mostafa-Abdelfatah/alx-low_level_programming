#include "main.h"

/**
 * swap_int - swap the value of two variables
 * @a : a pointer points to first value
 * @b : a pointer points to second value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
