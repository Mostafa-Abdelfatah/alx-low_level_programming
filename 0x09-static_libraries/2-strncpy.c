#include "main.h"

/**
* _strncpy - copy a string
* @dest: carry destination string
* @src: carry source string
* @n: carry length of second string
* Return: Always 0
*/

char *_strncpy(char *dest, char *src, int n)
{
int s, c;

s = 0;

while (*(src + s) != '\0')
{
s++;
}

for (c = 0; c < n && *(src + c) != '\0'; c++)
{
*(dest + c) = *(src + c);
}

for (; c < n; c++)
{
*(dest + c) = '\0';
}

return (dest);
}
