#include "main.h"
#include <string.h>
/**
 * _strlen - lenght of string
 * @s: A pointer to an int that will be changed/update
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
int len;
for (; *s != '\0' s++)
{
len += 1;
}
return (len);
}
