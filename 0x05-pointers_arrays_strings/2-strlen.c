#include "main.h"

/**
 * int _strlen - return the length of a string
 * @s : is the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
