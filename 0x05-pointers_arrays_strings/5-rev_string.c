#include "main.h"

/**
 * rev_string - reverse a string
 * @s : carry a string
 */

void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}

	char temp[i];

	int j;

	i--;
	j = 0;
	while (i >= 0)
	{
		temp[j] = s[i];
		i--;
		j++;
	}

	s = temp;
}
