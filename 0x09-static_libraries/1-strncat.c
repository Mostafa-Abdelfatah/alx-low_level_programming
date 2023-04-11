#include "main.h"

/**
* _strncat - concatinate of two strings
* @dest: carry destination
* @src: carry source
* @n: indicate number of bytes
* Return: concatinated string
*/

char *_strncat(char *dest, char *src, int n)
{
int d, s, c;

d = 0;
s = 0;
c = n;

while (*(dest + d) != '\0')
{
d++;
}
while (*(src + s) != '\0' && c > 0 && d < 97)
{
*(dest + d) = *(src + s);
d++;
s++;
c--;
}

*(dest + d) = '\0';

return (dest);

}
