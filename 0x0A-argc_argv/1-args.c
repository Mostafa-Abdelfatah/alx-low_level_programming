#include <stdio.h>

/**
* main - print the number of arguments
* @argc: int
* @argv: string array
* Return: 0
*/

int main (int argc, char *argv[] __attribute__((unsed)))
{
printf("%d\n", argc - 1);
return (0);
}