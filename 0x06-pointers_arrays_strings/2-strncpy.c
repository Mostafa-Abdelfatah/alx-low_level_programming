#include "main.h"

/**
* _strncpy - copy a string
* @dest: carry destination string
* @src: carry source string
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

if (s <= n)
{
dest = src;
}
else
{

for (c = 0; c < n; c++)
{
*(dest + c) = *(src + c);
}

}

return (dest);
}
