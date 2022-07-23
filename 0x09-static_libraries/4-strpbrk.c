#include "main.h"

/**
 * _strpbrk - search a string for any of a set of a bytes
 * @s: source of string
 * @accept: accepting character
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
int a = 0, b;
while (s[a])
{
b = 0;

while (accept[b])
{
if (s[a] == accept[b])
{
s += a;
return (s);
}
b++;
}
a++;
}
return ('\0');
}
