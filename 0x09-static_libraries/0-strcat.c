#include "main.h"

/**
 * _strcat - concatenates 2 strings.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0.
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
