#include "main.h"

/**
 * is_islower - function to check for lowercase character
 *
 * Return: 1 if int c = lower, otherwise 0
 *
 * @c: variable to be tested
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
