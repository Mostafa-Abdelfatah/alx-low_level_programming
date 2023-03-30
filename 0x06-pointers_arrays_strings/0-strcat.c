#include "main.h"

/**
 * _strncat - to concatinate a two strings
 * @dest : carry the second string
 * @src : carry the source string
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
    int d, s;

    d = 0;
    s = 0;

    while (*(dest + d) != '\0')
    {
        d++;
    }
    while (*(src + s) != '\0' && d < 98)
    {
        *(dest + d) = *(src + s);
        d++;
        s++;
    }
    return (dest);
}
