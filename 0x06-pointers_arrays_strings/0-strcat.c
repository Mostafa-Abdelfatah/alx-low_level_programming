#include "main.h"

/**
 * _strncat - to concatinate a two strings
 * @dest: carry the second string
 * @src: carry the source string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
int LenD, LenS;

LenD = 0;
LenS = 0;

while (*(dest + LenD) != '\0')
{
LenD++;
}

while (*(src + LenS) != '\0' && LenD < 97)
{
*(dest + LenD) = *(src + LenS);
LenD++;
LenS++;
}

*(dest + LenD) = '\0';

return (dest);
}
