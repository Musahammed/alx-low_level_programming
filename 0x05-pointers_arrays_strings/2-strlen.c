#include "main.h"
/**
 * _strlen - lenght of string
 * @s: A pointer to an int that will be changed/update
 *
 * Return: void tha means our answer is correct
 */
int _strlen(char *s)
{
int len;

while (*s != '\0')
{
len += 1;
*s = *s + 1;
}
Return: (len);
}
