#include "main.h"

/**
* _strcmp - compare betwen two strings
* @s1: carry string 1
* @s2: carry string 2
* Return: a number
*/

int _strcmp(char *s1, char *s2)
{
int i, c;

c = 0;

while (*(s1 + c) != '\0' && *(s2 + c) != '\0')
{

if (*(s1 + c) > *(s2 + c))
{
i = *(s1 + c) - *(s2 + c);
break;
}
else if (*(s1 + c) < *(s2 + c))
{
i = *(s1 + c) - *(s2 + c);
break;
}
else
{
i = 0;
}

}

return (i);

}
