#include "main.h"
#include <string.h>
/**
 * _memset - function of memory set
 * @b: 1st param
 * @s: 2nd param
 * @n: 3rd param
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n);
{
unsigned int i;
i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
