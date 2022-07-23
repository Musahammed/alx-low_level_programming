#include "main.h"

/**
 * _memcpy - function of memory copy
 * @dest: destination of memory
 * @n: number of bytes to be copied
 * @src: sourc of memory
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
dest[a] = src[a];

return (dest);
}
