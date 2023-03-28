#include "main.h"

/**
 * rev_string - reverse a string
 * @s : carry a string
 */

void rev_string(char *s)
{
	char temp;
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	int l;

	l = i / 2;
	for (j = 0; j < l; j++)
	{
		temp = s[j];
		s[j] = s[i-1];
		s[i-1] = temp;

		i--;

	}
}
